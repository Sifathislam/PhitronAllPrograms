    def book_seats(self,id, seats):
        try:
            found = False
            for show in self._show_list:
                if id == show[0]:
                    found = True
                    break
            if not found:
                raise ValueError("Invalid Id Given for the Show")
            
            for book_single_seat in seats:
                row,col = book_single_seat
                
                if 0 < row > self._rows and 0 < col > self._cols:
                    raise ValueError("InValid Give Seat to Book ")
                
                self.needIdBookSeat = self._seats[id]
                if  self.needIdBookSeat[row][col] == 1:
                    raise ValueError("Seat is Booked Already")
                self.needIdBookSeat[row][col] = 1
                
                print(f"\nYour Seat Number{row,col} is booked\n")
        except ValueError as error:
            print(f"Erro is {error}") 
