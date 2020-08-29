from loguru import logger
from Client import Client
from bs4 import BeautifulSoup
from urllib.request import urlopen
# ----------------------------------------------

class Searcher():
    def __init__(self, departure_airpts_togo, arrival_airports_togo, departure_airpts_back, 
                arrival_airports_back, when_to_go, when_to_return):

        self.departure_airpts_togo = departure_airpts_togo
        self.arrival_airports_togo = arrival_airports_togo
        self.departure_airpts_back = departure_airpts_back
        self.arrival_airports_back = arrival_airports_back
        self.when_to_go = when_to_go
        self.when_to_return = when_to_return
        self.all_searches = []
        self.precos = []


    def run(self):
        self.__createUrlsList()
        self.__searchPrices()
        self.__sorter()


    def __createUrlsList(self):
        for dep_airp_togo in self.departure_airpts_togo:
            for arr_airp_togo in self.arrival_airports_togo:
                for date_togo in self.when_to_go:
                    for dep_airp_back in self.departure_airpts_back:
                        for arr_airp_back in self.arrival_airports_back:
                            for date_back in self.when_to_return:
                                link_for_research = f"""https://www.kayak.com.br/flights/{dep_airp_togo}-{arr_airp_togo}/{date_togo}-h/{dep_airp_back}-{arr_airp_back}/{date_back}-h?sort=bestflight_a"""
                                self.all_searches.append(link_for_research)
        print(self.all_searches)
        print(len(self.all_searches))


    def __searchPrices(self):
        for link in self.all_searches:
            logger.debug(f"link: {link}")
            client_response = Client(link, self.__onload)

        logger.warning(f"Urls e preços: {self.precos}")


    def __sorter(self):
        just_price = []
        for k in self.precos:
            just_price.append(int(k[1]))
        just_price.sort()
        logger.warning(f"Preços ordenados do mais barato para o mais caro: {just_price}")


    def __onload(self, link, html):
        bs = BeautifulSoup(html, 'html.parser')
        try:
            price = bs.find('span', {'class': 'price-text'}).getText()
            try:
                price = price.split()
                self.precos.append((link, price[1]))
            except Exception as e:
                logger.error(f"I wasn't able to split price: {price}, {e}")
        except Exception as e:
            logger.error(e)
        # logger.warning(f"precos dentro do onload: {self.precos}")
