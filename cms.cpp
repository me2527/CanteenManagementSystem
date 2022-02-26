/****************** HEADER FILES ******************/
#include<iostream.h> // FOR cin AND cout
#include<fstream.h> // FOR fstream , ifstream AND ofstream
#include<conio.h> // FOR clrscr() AND getch()
#include<stdio.h> // FOR gets() , rename() AND remove()
#include<process.h> // FOR exit()
#include<iomanip.h> // FOR setw()
#include<string.h> // FOR strupr() AND strcpy()
#include<dos.h> // FOR date
/****************** CLASS COSTUMER ******************/
class customer
{
int c_id;
char c_name[25];
char address[35];
char ph_no[15];
public:
customer() //CONSTRUCTOR
{
c_id = 0;
strcpy(c_name,"-");
strcpy(address,"-");
strcpy(ph_no,"-");
}
void modify_customer_data(); //FUNCTION TO MODIFY
DATA
int get_customer_id() //FUNCTION TO RETURN ID
{
return c_id;
}
void customer_input(int id) //FUNCTION TO INPUT DATA
{
cout<<"CUSTOMER NO: ";
c_id = id;
cout<<c_id<<endl;
cout<<"ENTER NAME OF CUSTOMER: ";
gets(c_name);
cout<<"ENTER ADDRESS: ";
gets(address);
cout<<"ENTER PHONE NO.: ";
cin>>ph_no;
}
void show_customer() //FUNCTION TO SHOW DATA
{
cout<<"CUSTOMER NO: ";
cout<<c_id<<endl;
cout<<"NAME OF CUSTOMER: ";
cout<<c_name<<endl;
cout<<"ADDRESS: ";
cout<<address<<endl;
cout<<"PHONE NO.: ";
cout<<ph_no<<endl;
}
void show_all_customer() //FUNCTION TO SHOW DATA IN ONE
LINE
{
cout<<c_id<<"\t"<<setw(18)<<c_name<<"\t"<<setw(18)<<address<<"\t"<<se
tw(15)<<ph_no<<endl;
}
void show_innovice()
{
cout<<"CUSTOMER NO:"<<c_id<<"\t\t\t\t\t";
cout<<"NAME OF CUSTOMER:"<<c_name<<endl;
cout<<"PHONE NO.:"<<ph_no<<"\t\t\t\t";
}
};
//FUNCTION TO MODIFY DATA
void customer::modify_customer_data()
{
char choice;
cout<<"CUSTOMER NO: "<<c_id<<endl;
cout<<"NAME OF CUSTOMER: "<<c_name<<endl; //NAME TO BE
MODIFY
cout<<"Do you want to change the name of Customer(Y/N): ";
cin>>choice;
if(toupper(choice) == 'Y')
{
cout<<"Enter New Name: ";
gets(c_name);
}
cout<<"CUSTOMER ADDRESS: "<<address<<endl; //ADDRESS TO BE
MODIFY
cout<<"Do you want to change the Address(Y/N): ";
cin>>choice;
if(toupper(choice) == 'Y')
{
cout<<"Enter New Address: ";
gets(address);
}
cout<<"CUSTOMER PHONE NO.:"<<ph_no<<endl; //PHONE NO. TO
BE MODIFY
cout<<"Do you want to change the Phone No.(Y/N): ";
cin>>choice;
if(toupper(choice) == 'Y')
{
cout<<"Enter New Phone No.: ";
gets(ph_no);
}
}
/****************** CLASS PRODUCT ******************/
class product
{
int product_id;
char name[20];
char company[20];
int quantity;
float price,disc;
public:
product() //CONSTRUCTOR
{
price = disc = quantity = product_id = 0;
strcpy(name,"-");
strcpy(company,"-");
}
void modifydata(); //FUNCTION TO MODIFY DATA
void create_product(int rn1) //FUNCTION TO INPUT DATA
{
cout<<"PRODUCT NO: ";
product_id = rn1 ;
cout<<product_id<<endl;
cout<<"ENTER NAME OF PRODUCT: ";
gets(name);
cout<<"ENTER COMPANY: ";
gets(company);
cout<<"ENTER QUANTITY: ";
cin>>quantity;
cout<<"ENTER PRODUCT PRICE: ";
cin>>price;
cout<<"ENTER DISCOUNT: ";
cin>>disc;
}
void show_product() //FUNCTION TO SHOW DATA
{
cout<<"PRODUCT NO: ";
cout<<product_id<<endl;
cout<<"NAME OF PRODUCT: ";
cout<<name<<endl;
cout<<"COMPANY: ";
cout<<company<<endl;
cout<<"QUANTITY: ";
cout<<quantity<<endl;
cout<<"PRODUCT PRICE: ";
cout<<price<<endl;
cout<<"DISCOUNT: ";
cout<<disc<<endl;
}
void show_All() //FUNCTION TO SHOW DATA IN ONE
LINE
{
cout<<product_id<<setw(20)<<name<<setw(20)<<company;
cout.setf(ios::left);
cout<<"\t"<<"Rs."<<price;
cout.setf(ios::right);
cout<<"\t"<<setw(8)<<quantity<<setw(10)<<disc<<endl;
}
float show_innovice() //FUNCTION TO SHOW DATA IN ONE
LINE IN INNOVICE
{
cout<<product_id<<setw(17)<<name;
cout<<setw(10)<<quantity<<setw(13)<<"Rs."<<price;
return ( quantity * price );
}
int return_pno() //FUNCTION TO RETURN ID
{
return product_id;
}
int get_qty() //FUNCTION TO RETURN QUANTITY
{
return quantity;
}
float return_dis() //FUNCTION TO RETURN DISCOUNT
{
return disc;
}
void set_qty(int q) //FUNCTION TO SET QUANTITY
{
quantity = q;
}
};
//FUNCTION TO MODIFY DATA
void product::modifydata()
{
char choice;
cout<<"PROD NO: "<<product_id<<endl;
cout<<"NAME OF PRODUCT: "<<name<<endl; //NAME TO BE
MODIFY
cout<<"Do you want to change the name of Product(Y/N): ";
cin>>choice;
if(toupper(choice) == 'Y')
{
cout<<"Enter New Name: ";
gets(name);
}
//COMPANY NAME TO BE MODIFY
cout<<"COMPANY NAME: "<<company<<endl; //NAME TO BE
MODIFY
cout<<"Do you want to change the name of Company(Y/N): ";
cin>>choice;
if(toupper(choice) == 'Y')
{
cout<<"Enter New Name: ";
gets(company);
}
cout<<"QUANTITY: "<<quantity<<endl; //QUANTITY TO BE
MODIFY
cout<<"Do you want to change the Quantity of Product(Y/N): ";
cin>>choice;
if(toupper(choice) == 'Y')
{
cout<<"Enter New Quantity: ";
cin>>quantity;
}
cout<<"PRICE: "<<price<<endl; //PRICE TO BE MODIFY
cout<<"Do you want to change the Price of Product(Y/N): ";
cin>>choice;
if(toupper(choice) == 'Y')
{
cout<<"Enter New Price: ";
cin>>price;
}
cout<<"DISCOUNT: "<<disc<<endl; //DISCOUNT TO BE MODIFY
cout<<"Do you want to change the Discount of Product(Y/N): ";
cin>>choice;
if(toupper(choice) == 'Y')
{
cout<<"Enter New Discount: ";
cin>>disc;
}
}
//FUNCTION PROTOTYPES
void introduction();
void main_heading();
void place_order();
void admin_menu();
void product_tabular();
void changeqty(int pr1,int q11);
void customer_menu();
void product_menu();
void write_customer();
void customer_tabular();
void display_customer();
void modify_customer();
void delete_customer();
void write_product();
void display_product();
void modify_product();
void delete_product();
int getproduct();
long search(int p);
//INTRODUCTION
void introduction()
{
cout<<"\n\n\n\n\n\n"<<"\t\t\tCANTEEN MANAGEMENT"<<endl<<endl;
cout<<"\t\t\tCOMPUTER SCIENCE PROJECT"<<endl<<endl;
cout<<"\t\t\tMADE BY : ADITI DWIVEDI"<<endl<<endl;
cout<<"\t\t\tSCHOOL : MAHATMA HANSRAJ MODERN
SCHOOL"<<endl<<endl;
getch();
}
//MAIN HEADING
void main_heading()
{
clrscr();
cout<<"\t\t\tCANTEEN MANAGEMENT SYSTEM"<<endl<<endl;
}
//VOID MAIN
void main()
{
int choice;
introduction();
do
{
main_heading(); //CALL OF MAIN HEADING FUNCTION
cout<<"\t\t\t\tMAIN MENU"<<endl<<endl;
cout<<"1. BILL GENERATOR"<<endl;
cout<<"2. ADMINISTRATOR"<<endl;
cout<<"3. EXIT"<<endl;
cout<<"Please Enter Your Choice (1-3): ";
cin>>choice;
switch(choice)
{
case 1: place_order(); //CALL OF PLACE
ORDER FUNCTION
break;
case 2: admin_menu(); //CALL OF ADMIN
MENU FUNCTION
break;
case 3: exit(0);
default: cout<<"\a";
}
}while(choice != 3 );
}
//FUNCTION TO GENERATE BILL
void place_order()
{
char ch;
int prod_no , qty , count , value , num;
long pos;
float amt , damt , total , ttaxt ;
date bill_date ;
product stock , ord[50];
customer buyer;
ifstream file;
value = count = amt = damt = total = ttaxt = 0 ;
main_heading(); //CALL OF MAIN HEADING FUNCTION
cout<<"ENTER THE CUSTOMER ID TO BE SEARCHED: ";
cin>>num;
file.open("CUSTOMER.dat",ios::binary);
while(file.read((char *)&buyer, sizeof(buyer)))
{
if(buyer.get_customer_id() == num )
{
buyer.show_customer();
value = 1 ;
break;
}
}
file.close();
if( value == 1 )
{
product_tabular(); //CALL OF PRODUCT TABULAR FUNCTION
main_heading(); //CALL OF MAIN HEADING FUNCTION
cout<<"\t\t\t\tPLACE YOUR ORDER"<<endl<<endl;
do
{
cout<<"ENTER THE PRODUCT NO: ";
cin>>prod_no;
pos = search(prod_no);
if(pos > 1 )
{
cout<<"ENTER THE QUANTITY: ";
cin>>qty;
changeqty(prod_no,qty);
ifstream file("PRODUCT.dat",ios::binary);
file.seekg(pos - sizeof(product));
file.read((char*)&stock , sizeof(product) );
ord[count] = stock ;
ord[count].set_qty(qty) ;
count++ ;
}
else
{
cout<<"PRODUCT NOT FOUND "<<endl;
}
cout<<"DO YOU WANT TO PURCHASE MORE(Y/N): ";
cin>>ch;
} while(ch == 'y' || ch == 'Y' );
cout<<endl<<endl<<"THANK YOU FOR PLACING THE
ORDER."<<endl;
getch();
main_heading(); //CALL OF MAIN HEADING FUNCTION
cout<<"\t\t\t\tINVOICE"<<endl<<endl;
buyer.show_innovice();
getdate(&bill_date);
cout<<"DATE: "<<(bill_date.da_day+1-1)<<"-";
cout<<(bill_date.da_mon+1-1)<<"-";
cout<<(bill_date.da_year+1-1)<<endl;
cout<<"------------------------------------------------------------------------------
-"<<endl;
cout<<"PR.No."<<setw(12)<<"NAME"<<setw(10)<<"Qty"<<setw(15)<<"Pri
ce"<<setw(13)<<"Amount"<<setw(23)<<"Amount - Discount"<<endl;
cout<<"------------------------------------------------------------------------------
-"<<endl;
for(int x = 0 ; x < count ; x++)
{
amt = ord[x].show_innovice();
cout<<"\t "<<"Rs.";
cout.setf(ios::left);
cout<<setw(10)<<amt;
damt = amt - ord[x].return_dis();
cout<<" Rs."<<damt<<endl;
total += damt;
cout.setf(ios::right);
}
ttaxt=5;
cout<<"------------------------------------------------------------------------------
-"<<endl;
cout<<"\t\tTOTAL: "<<total<<"\t\t\t\tTAX : "<<ttaxt<<" %"<<endl;
cout<<"------------------------------------------------------------------------------
-"<<endl;
cout<<"\t\t\t\tNET TOTAL: "<<( total + ( (ttaxt*total)/ 100 ))<<endl;
cout<<"------------------------------------------------------------------------------
-"<<endl;
}
else
{
cout<<endl<<endl<<"ENTERED ID IS WRONG."<<endl;
}
getch();
}
//FUNCTION TO DISPLAY ADMINISTRATOR MENU
void admin_menu()
{
int choice;
do
{
main_heading(); //CALL OF MAIN HEADING FUNCTION
cout<<"\t\t\t\tADMIN MENU"<<endl<<endl;
cout<<"1. CUSTOMER'S MENU"<<endl;
cout<<"2. PRODUCT'S MENU"<<endl;
cout<<"3. BACK TO MAIN MAIN"<<endl;
cout<<"Please Enter Your Choice(1-3): ";
cin>>choice;
switch(choice)
{
case 1: customer_menu(); //CALL OF CUSTOMER
MENU FUNCTION
break;
case 2: product_menu(); //CALL OF PRODUCT
MENU FUNCTION
break;
case 3: break;
default :cout<<"\a";
admin_menu();
}
}while(choice != 3 );
}
//FUNCTION TO PRINT PRODUCT DETAILS IN ONE LINE
void product_tabular()
{
product stock;
fstream file;
file.open("PRODUCT.dat",ios::in | ios::out | ios::binary);
main_heading(); //CALL OF MAIN HEADING
FUNCTION
cout<<"\t\t\t\tPRODUCTS DETAILS"<<endl<<endl;
cout<<"-------------------------------------------------------------------------------
"<<endl;
cout<<"PROD.NO"<<setw(15)<<"NAME"<<setw(20)<<"COMPANY"<<"\t"
;
cout<<"PRICE"<<"\t"<<setw(8)<<"QUANTITY"<<" ";
cout<<setw(10)<<"DISCOUNT"<<endl;
cout<<"-------------------------------------------------------------------------------
"<<endl;
while(file.read((char *) &stock, sizeof(stock)))
{
stock.show_All();
}
cout<<"-------------------------------------------------------------------------------
"<<endl;
file.close();
getch();
}
//FUNCTION TO SEARCH PRODUCT AND RETURN ITS POSITION
long search(int p)
{
int flag ;
long adres;
product stock;
ifstream file;
file.open("PRODUCT.dat",ios::binary);
flag = 0;
while(file.read((char *) &stock, sizeof(product)))
{
if(stock.return_pno() == p )
{
flag = 1;
adres = file.tellg();
return adres;
}
}
file.close();
if(flag == 0 )
{
return 1;
}
}
//FUNCTION TO CHANGE PRODUCT QUANTITY AND MODIFY IN FILE
void changeqty(int prod,int qty)
{
int new_qty;
long fpos = -1;
product stock;
fstream file;
file.open("PRODUCT.dat",ios::binary|ios::in|ios::out);
while(file.read((char *) &stock , sizeof(product)))
{
if( stock.return_pno() == prod )
{
fpos = file.tellg();
break;
}
}
new_qty = stock.get_qty();
new_qty -= qty ;
stock.set_qty(new_qty);
file.seekp(fpos-sizeof(product),ios::beg);
file.write((char *) &stock, sizeof(product));
file.close();
}
//FUNCTION TO DISPLAY COSTUMER MENU
void customer_menu()
{
int choice2;
main_heading(); //CALL OF MAIN HEADING FUNCTION
cout<<"\t\t\t\tADMIN MENU"<<endl<<endl;
cout<<"\t\t\t\tCUSTOMER MENU"<<endl<<endl;
cout<<"1. CREATE CUSTOMERS RECORD"<<endl;
cout<<"2. DISPLAY ALL CUSTOMERS DETAILS"<<endl;
cout<<"3. SEARCH RECORD(QUERY) "<<endl;
cout<<"4. MODIFY CUSTOMERS RECORDS"<<endl;
cout<<"5. DELETE CUSTOMERS RECORDS"<<endl;
cout<<"6. BACK TO MAIN MENU"<<endl;
cout<<"Please Enter Your Choice (1-6): ";
cin>>choice2;
switch(choice2)
{
case 1: write_customer(); //CALL OF WRITE
CUSTOMER FUNCTION
break;
case 2: customer_tabular(); //CALL OF CUSTOMER
TABULAR FUNCTION
break;
case 3: display_customer(); //CALL OF DISPLAY
CUSTOMER FUNCTION
break;
case 4: modify_customer(); //CALL OF MODIFY
CUSTOMER FUNCTION
break;
case 5: delete_customer(); //CALL OF DELETE
CUSTOMER FUNCTION
break;
case 6: break;
default: cout<<"\a";
customer_menu();
}
}
//FUNCTION TO ADD COSTUMER
void write_customer()
{
int count;
customer add;
fstream file;
count = 0;
file.open("CUSTOMER.dat", ios::in | ios::binary);
while(file.read((char*) &add, sizeof(add)));
count = add.get_customer_id();
file.close();
main_heading(); //CALL OF MAIN HEADING FUNCTION
add.customer_input(count + 1);
file.open("CUSTOMER.dat", ios::out | ios::binary | ios::app);
file.write((char*) &add , sizeof(add));
file.close();
cout<<endl<<endl<<"CUSTOMER RECORD SAVED."<<endl;
getch();
}
//FUNCTION TO DISPLAY COSTUMER IN ONE LINE
void customer_tabular()
{
customer buyer;
ifstream file;
file.open("CUSTOMER.dat" , ios::binary);
main_heading(); //CALL OF MAIN HEADING FUNCTION
cout<<"\t\t\t\tCUSTOMER DETAILS"<<endl<<endl;
cout<<"-------------------------------------------------------------------------------
"<<endl;
cout<<"CUST.NO\t"<<setw(12)<<"NAME"<<" \t
"<<setw(25)<<"ADDRESS"<<setw(20)<<"PHONE NO"<<endl;
cout<<"-------------------------------------------------------------------------------
"<<endl;
while(file.read((char *) &buyer, sizeof(buyer)))
{
buyer.show_all_customer();
}
cout<<"-------------------------------------------------------------------------------"<<endl;
file.close();
getch();
}
//FUNCTION TO DISPLAY COSTUMER
void display_customer()
{
int n , flag = 0;
ifstream file;
customer buyer;
file.open("CUSTOMER.dat",ios::binary);
main_heading(); //CALL OF MAIN HEADING FUNCTION
cout<<"ENTER THE CUSTOMER ID TO BE SEARCHED: ";
cin>>n;
while(file.read((char*) &buyer , sizeof(buyer)))
{
if(buyer.get_customer_id() == n)
{
buyer.show_customer();
flag = 1;
}
}
file.close();
if(flag == 0)
{
cout<<endl<<endl<<"RECORD NOT EXIST.";
}
getch();
}
//FUNCTION TO MODIFY COSTUMER DATA
void modify_customer()
{
int n , flag = 0 ;
long pos = -1 ;
customer buyer;
fstream file;
file.open("CUSTOMER.dat",ios::binary|ios::in|ios::out);
main_heading(); //CALL OF MAIN HEADING FUNCTION
cout<<"ENTER THE CUSTOMER ID TO BE MODIFIED: ";
cin>>n;
while(file.read((char *) &buyer, sizeof(buyer)))
{
if(buyer.get_customer_id() == n)
{
flag = 1;
pos = file.tellg();
break;
}
}
file.close();
if(flag == 0)
{
cout<<endl<<endl<<"RECORD NOT EXIST.";
}
else
{
file.open("CUSTOMER.dat",ios::binary|ios::in|ios::out);
file.seekp(pos - sizeof(buyer),ios::beg);
buyer.modify_customer_data();
file.write((char *) &buyer , sizeof(buyer));
file.close();
cout<<endl<<endl<<"RECORD MODIFIED."<<endl;
}
getch();
}
//FUNCTION TO DELETE COSTUMER DATA
void delete_customer()
{
char ch;
int n , flag=0;
customer buyer;
ofstream outfile;
ifstream file;
file.open("CUSTOMER.dat",ios::binary);
main_heading(); //CALL OF MAIN HEADING FUNCTION
cout<<"ENTER THE CUSTOMER ID TO BE SEARCHED AND TO
DELETE: ";
cin>>n;
while(file.read((char *) &buyer, sizeof(buyer)))
{
if(buyer.get_customer_id() == n)
{
buyer.show_customer();
flag = 1;
}
}
file.close();
if(flag == 0)
{
cout<<endl<<endl<<"RECORD NOT EXIST.";
}
else
{
cout<<endl<<"DO YOU WANT TO DELETE THE RECORDS GIVEN
ABOVE(Y/N): ";
cin>>ch;
if (toupper(ch)=='Y')
{
outfile.open("Temp2.dat",ios::binary);
file.open("CUSTOMER.dat",ios::binary);
file.seekg(0,ios::beg);
while(file.read((char *) &buyer, sizeof(buyer)))
{
if(buyer.get_customer_id() != n)
{
outfile.write((char *) &buyer, sizeof(buyer));
}
}
outfile.close();
file.close();
remove("CUSTOMER.dat");
rename("Temp2.dat","CUSTOMER.dat");
cout<<endl<<endl<<"RECORD DELETED."<<endl;
}
}
getch();
}
//FUNCTION TO DISPLAY PRODUCT MENU
void product_menu()
{
int choice2;
main_heading(); //CALL OF MAIN HEADING FUNCTION
cout<<"\t\t\t\tADMIN MENU"<<endl<<endl;
cout<<"\t\t\t\tPRODUCT MENU"<<endl<<endl;
cout<<"1. CREATE PRODUCTS"<<endl;
cout<<"2. DISPLAY ALL PRODUCTS AVAILABEL"<<endl;
cout<<"3. SEARCH RECORD "<<endl;
cout<<"4. MODIFY PRODUCTS"<<endl;
cout<<"5. DELETE PRODUCTS"<<endl;
cout<<"6. BACK TO MAIN MENU"<<endl;
cout<<"Please Enter Your Choice (1-6): ";
cin>>choice2;
switch(choice2)
{
case 1: write_product(); //CALL OF WRITE PRODUCT
FUNCTION
break;
case 2: product_tabular(); //CALL OF PRODUCT
TABULAR FUNCTION
break;
case 3: display_product(); //CALL OF DISPLAY
PRODUCT FUNCTION
break;
case 4: modify_product(); //CALL OF MODIFY
PRODUCT FUNCTION
break;
case 5: delete_product(); //CALL OF DELETE
PRODUCT FUNCTION
break;
case 6: break;
default: cout<<"\a";
customer_menu();
}
}
//FUNCTION TO ADD PRODUCT
void write_product()
{
int count = 0;
product stock;
fstream file;
file.open("PRODUCT.dat",ios::in | ios::binary);
while(file.read((char*) &stock, sizeof(stock)));
count = stock.return_pno();
file.close();
main_heading(); //CALL OF MAIN HEADING FUNCTION
file.open("PRODUCT.dat",ios::out | ios::binary | ios::app);
stock.create_product(count + 1);
file.write((char*)&stock,sizeof(stock));
file.close();
cout<<endl<<endl<<"PRODUCTS RECORD SAVED"<<endl;
getch();
}
//FUNCTION TO DISPLAY PRODUCT
void display_product()
{
int n , flag = 0;
fstream file;
product stock;
file.open("PRODUCT.dat",ios::in,ios::binary);
main_heading(); //CALL OF MAIN HEADING FUNCTION
cout<<"ENTER THE PRODUCT ID TO BE SEARCHED: ";
cin>>n;
while(file.read((char*)&stock,sizeof(stock)))
{
if(stock.return_pno() == n)
{
stock.show_product();
flag = 1;
}
}
file.close();
if(flag == 0)
{
cout<<endl<<endl<<"RECORD NOT EXIST.";
}
getch();
}
//FUNCTION TO MODIFY PRODUCT
void modify_product()
{
int n , flag = 0;
long pos = 0 ;
fstream file;
product stock ;
file.open("PRODUCT.dat", ios::in | ios::binary);
main_heading(); //CALL OF MAIN HEADING FUNCTION
cout<<"ENTER THE PRODUCT ID TO BE MODIFIED: ";
cin>>n;
while(file.read((char *) &stock, sizeof(product)))
{
if(stock.return_pno() == n)
{
flag=1;
pos = file.tellg();
break;
}
}
file.close();
if(flag == 0)
{
cout<<endl<<endl<<"RECORD NOT EXIST."<<endl;
}
else
{
file.open("PRODUCT.dat",ios::binary | ios::in | ios::out);
file.seekp(pos-sizeof(stock),ios::beg);
stock.modifydata();
file.write((char *) &stock, sizeof(stock));
file.close();
cout<<endl<<endl<<"RECORD MODIFIED."<<endl;
}
getch();
}
//FUNCTION TO DELETE PRODUCT
void delete_product()
{
int n , flag = 0 ;
product stock;
ifstream file;
file.open("PRODUCT.dat",ios::binary);
main_heading(); //CALL OF MAIN HEADING FUNCTION
cout<<"ENTER THE PRODUCT ID TO BE SEARCHED AND TO DELETE:
";
cin>>n;
while(file.read((char *) &stock, sizeof(stock)))
{
if(stock.return_pno()==n)
{
stock.show_product();
flag = 1;
}
}
file.close();
char ch;
if( flag == 0 )
{
cout<<endl<<endl<<"RECORD NOT EXIST.";
}
else
{
cout<<endl<<"DO YOU WANT TO DELETE THE RECORDS GIVEN
ABOVE(Y/N): ";
cin>>ch;
if (toupper(ch)=='Y')
{
ofstream outfile;
outfile.open("Temp1.dat",ios::binary);
ifstream fil("PRODUCT.dat",ios::binary);
fil.seekg(0,ios::beg);
while(fil.read((char *) &stock, sizeof(product)))
{
if(stock.return_pno() != n)
{
outfile.write((char *) &stock, sizeof(stock));
}
}
outfile.close();
fil.close();
remove("PRODUCT.dat");
rename("Temp1.dat","PRODUCT.dat");
cout<<endl<<endl<<"RECORD DELETED."<<endl;
}
}
getch();
}