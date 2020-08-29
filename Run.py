
from Searcher import Searcher
# ---------------

# Set airports and dates for your trip below
departure_airpts_togo = input("De quais aeroportos você deseja partir? ")
arrival_airports_togo = input("Em quais aeroportos você deseja chegar? ")
departure_airpts_back = input("De quais aeroportos você deseja partir na volta? ")
arrival_airports_back = input("Em quais aeroportos você deseja chegar na volta? ")
when_to_go = input("Quais as datas de ida? ")
when_to_return = input("Quais as datas de volta? ")

# -----------------------------------
departure_airpts_togo = departure_airpts_togo.split()
arrival_airports_togo = arrival_airports_togo.split()
departure_airpts_back = departure_airpts_back.split()
arrival_airports_back = arrival_airports_back.split()
when_to_go = when_to_go.split()
when_to_return = when_to_return.split()

searcher = Searcher(departure_airpts_togo, arrival_airports_togo, departure_airpts_back, 
                        arrival_airports_back, when_to_go, when_to_return)
searcher.run()
