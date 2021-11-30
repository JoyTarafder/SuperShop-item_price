#Existing price list
Price_list = [["01","Banana", 5.00, "unit"], ["02", "Mango", 20.00, "kg"], ["03", "Apple", 15.00, "kg"], ["04", "Papaya", 25.00, "unit"], ["05", "Guava", 15.00, "kg"]]
 
#Define function for inserting a new item

#Changing item price
def change_price():
  item = input( 'Enter Item Name: ')
  found = 1
  for i in range(0, len(Price_list)):
    if (Price_list[i][1]) == item :
      update_price = float(input("New Price : "))
      print("\n") #For new line
      old_price = Price_list[i][2]
      Price_list[i][2] = update_price
      print("Old Price    - {0:7} : {1:5}".format(item, old_price))
      value = Price_list[i][2]-old_price
      if update_price > old_price:
        print("Add value : \t\t+", value)
      else:
        print("Add value : \t\t", value)
      print("Update Price - {0:7} : {1:5}".format(item, update_price))
      found = 0
  if found == 1:
    print('Not Found.')


def insert_item():
  #Ask for item detail
  print("****** Enter new item details ******")
  Item_ID = input("Item ID: ")
  Item_name = input("Item Name: ")
  Item_price = float(input("Item price: "))
  Item_unit = input("unit/kg: ")
 
  #Adding new item
  New_Item = [Item_ID, Item_name, Item_price, Item_unit]
  Price_list.append(New_Item)
  print("Item inserted")
 
#Define function for displaying the Price List
def print_list():
  print("Price List:")
  print("-----------")
  print("Item no  Item name  Price  Sold by")
  for i in range(0, len(Price_list)):
    print("{0:7}  {1:9}  {2:5}  {3:4}".format(Price_list[i][0], Price_list[i][1], Price_list[i][2], Price_list[i][3]))
 
option = 10 #Arbitrary value for entering while loop
 
#Loop to repeatedly display the menu
while option != "0": #Exit loop when the value is 0
  print("What do you wish to do?")
  print("1 -> Print the price list")
  print("2 -> Add a new item")
  print("3 -> Change item price")
  print("0 -> Exit menu")
  option = input("Select option: ")
  print("\n") #For new line
 
  #Check chosen option and call the appropriate function
  if option == "1":
    #Call the print_list function
    print_list()
    print("\n") #For new line
  elif option == "2":
    #Call the insert_item function
    insert_item() 
    print("\n") #For new line
  elif option == "3":
    change_price()
    print("\n") #For new line