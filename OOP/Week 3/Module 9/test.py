""" Project Of a Cinema Hall """

# This work for the Q.No:1
class StarCinema:
    # Class Attribute 
    __hall_list = []

    def entry_hall(self,hall):
        self.__hall_list.append(hall)

# This work for the Q.No:2

class Hall(StarCinema):
    def __init__(self,rows,cols,hall_no) -> None:
        self._rows = rows
        self._cols = cols
        self._hall_no = hall_no
        self._seats = {}
        self._show_list = []
        
        # Make object of row col and hall_no  and inheritence appned it 
        self.enter_hall = rows,cols,hall_no
        self.entry_hall(self.enter_hall)

# This work for the Q.No:3

    # Make a method in Hall class named entry_show()
    def entry_show(self,id,movie_Name,time):
        self._id = id
        self._movie_Name = movie_Name
        self._time = time            
        enter_show = (self._id,self._movie_Name,self._time)
        self._show_list.append(enter_show)

        self.seats = [[0 for i in range(self._cols)] for j in range(self._rows)]
        self._seats[self._id] = self.seats #Make a key with id to the attribute seats and value will be the 2d list.

# This work for the Q.No:4

    def book_seats(self,show_id, booking_seats):
        try:
            found = False
            for show in self._show_list:
                if show_id == show[0]:
                    found = True
                    break
            if not found:
                raise ValueError("Invalid Id Given for the Show")
            
            for book_single_seat in booking_seats:
                row,col = book_single_seat
                
                if 0 < row > self._rows and 0 < col > self._cols:
                    raise ValueError("InValid Give Seat to Book ")
                
                self.needIdBookSeat = self._seats[show_id]
                if  self.needIdBookSeat[row][col] == 1:
                    raise ValueError("Seat is Booked Already")
                self.needIdBookSeat[row][col] = 1
                
                print(f"\nYour Seat Number{row,col} is booked\n")
        except ValueError as error:
            print(f"\nErro is {error}, Pleas give the right Information\n")
# This work for the Q.No:5
 
    # view_show_list() which will view all the shows running.				
    def view_show_list(self):
        for show in self._show_list:
            print(f"\n{show[1]} is Available on ID:({show[0]}) On {show[2]}\n")

# This work for the Q.No:6
    #  view_available_seats() which will take an id of show, and view the seats that are available in that show
    def view_available_seats(self,show_id):
        try:
            found = False
            for show in self._show_list:
                if show_id == show[0]:
                    found = True
                    break
            if not found:
                raise ValueError("Invalid Id Given for the Show")
            self.needIdBookSeat = self._seats[show_id]
            for r in range(0,self._rows,1):
                print("{ ",end="")
                for c in range(0,self._cols,1):
                    print(self.needIdBookSeat[r][c],",",end=' ')
                print("}",end="")
                print()
        except ValueError as erro:
            print(f"\nError is {erro}, Pleas give the right Information\n")


StarCinemaHall = Hall(7,7,1000)
StarCinemaHall.entry_show("001","Avengers EndGame","12:00 AM")
StarCinemaHall.entry_show("002","Avengers Infinity War","1:00 PM")
StarCinemaHall.entry_show("003","Now Here","7:00 AM")
StarCinemaHall.entry_show("004","Jawan","8:00 AM")

# This work for the Q.No:7
while True:
    print("WellCome to StarCinemaHall")
    
    print("Choose Option form here:")
    print("1. View available movies for today")
    print("2. View available seats")
    print("3. Book Ticket")
    print("4.Exit")
    
    n = int(input("Enter Option:"))

    if n == 1:
        StarCinemaHall.view_show_list()

    elif n == 2:
        Id = str(input("Give the Id:"))
        print("Available seats in matrix") 
        StarCinemaHall.view_available_seats(Id)
    elif n == 3:
        IId = str(input("Give the Id:"))
        NumberofSeat = int(input("How many seats you want to book:"))
        SeatNumbers = []
        while NumberofSeat > 0:
            row_number = int(input("Give row number of the seat:"))
            col_number = int(input("Give col number of the seat:"))
            SeatNumbers.append((row_number,col_number))
            NumberofSeat-=1
        StarCinemaHall.book_seats(IId,SeatNumbers) 
        
    elif n == 4:
        break 


""" And the 8 and 9 are Work no the fuction if you look deeply """