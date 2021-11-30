Price_list = ["01","Banana", 5.00, "unit", "02", "Mango", 20.00, "kg", "03", "Apple", 15.00, "kg", "04", "Papaya", 25.00, "unit", "05", "Guava", 15.00, "kg"]  
new_item = input("Want to add new items (Yes or NO) : ")
if new_item == "yes" or new_item == "YES" or new_item == "Yes":
  id = input("ID : ")
  item_name = input("Item Name : ")
  price = float(input("Item Price : "))
  u_k = input("Unit/kg : ")
  Price_list.extend([id,item_name,price,u_k])
  print("New Item Added List :\n",Price_list)
else:
  print("No Update\n",Price_list)