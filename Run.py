
from Searcher import Searcher
# ---------------

# Set airports and dates for your trip below
departure_airpts_togo = ['SAO', 'BSB']
arrival_airports_togo = ['SEL']
departure_airpts_back = ['SEL']
arrival_airports_back = ['SAO', 'BSB']
when_to_go = ['2021-05-01', '2021-05-02', '2021-05-03', '2021-05-04', '2021-05-05']
when_to_return = ['2021-05-22', '2021-05-23', '2021-05-24', '2021-05-25', '2021-05-26']

searcher = Searcher(departure_airpts_togo, arrival_airports_togo, departure_airpts_back, 
    arrival_airports_back, when_to_go, when_to_return)
searcher.startSearching()
