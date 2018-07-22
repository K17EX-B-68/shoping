#include <iostream>
#include<string.h>
#include<iomanip>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class shop
{
	protected:
  int p,q,r,s;
  char name[100],email[100],pass[50];
  
  public:
  shop()
  {
     // name=0;
      //email=0;
      //pass=0;
  }
  void view();
  void detail();
  void sign();
   
};
class control:public shop       // 
{
  protected:
  char cat[50];
  int a,b;
  public:
  char choice[100];
  void category();
  void pro_detail();
  void display_pro_detail();
  void add_to_cart();
  void conform();
  
  
};/*
class payment:public shop,public control     //multple inheritence , file handling
{
    char Name_card[50],exp_date[30],nub_car[50];
    int pin;
    protected:
    void pay_deatil();
    void gate_way();
    void pay_display();
}; 
class data:public class shop,public class control         //friend function concept

{
   
    
}*/

void shop:: view()
{
    cout<<setfill('#')<<setw(50);
     cout<<setfill(' ')<<setw(50)<<"computer science project"<<setfill(' ')<<setw(50)<<endl;
    cout<<setfill(' ')<<setw(45)<<"SHOPING ADVICE"<<setfill(' ')<<setw(50)<<endl;
     cout<<setfill(' ')<<setw(40)<<" 2018"<<setfill(' ')<<setw(50)<<endl;
    cout<<setfill(' ')<<setw(50)<<endl;
    cout<<setfill(' ')<<setw(50)<<endl;
   
    cout<<setfill('*')<<setw(50)<<endl;
    
}
void shop::detail()
{
    cout<<"\nEnter Your Name : "<<endl;
    cin>>name;
     cout<<"\nEnter Your E-mail ID :\t";
    cin>>email;
    cout<<"\nPress \'1\' for Sign In and \'2\' for continue\t";
    int n;
    cin>>n;
    cout<<"\nEnter Your Password : \t"<<endl;
    cin>>pass;
    
}
void shop::sign()
{
    cout<<"\n\a Wellcome "<<name<<endl;
    //file handling;
}


void control::category()
{ int n,m;
   cout<<"what are you looking for !" <<endl;
   char c[]="cloth";
   cin>>c;
   	if(strcmp(c,"cloth")==0)
   //if(c=="cloth")
   {
       cout<<"\nINDIAN Fasion "<<"press [1] "<<endl;
        cout<<"\nINTERNATIONAL Fasion press [2]\n"<<endl;
       
       cin>>n;
       if(n==1)
       {
          cout<<"\nMen \t "<<"press [1]" <<endl;
          cout<<"Women \t press [2]"<<endl;
          cout<<"kid \t "<<"press [3]" <<endl;
          cout<<"Babay \t "<<"press [4]" <<endl;
          cout<<"ALL Collection \t "<<"press [5]" <<endl;
          cin>>m;
        switch(m)
        {
            case 1:
            	    	FILE *fptr;
                 char ch;
                  fptr = fopen("men.txt", "r");
                 if (fptr == NULL)
    {
                printf("Cannot open file \n");
              exit(0);
    }
  
           fptr = fopen("men.txt", "r");
             while (ch!='.')
    {
         ch = fgetc(fptr);
                printf ("%c", ch);

    }
            	
            pro_detail();   //user se enter karna ur file mai bhi write krna 
            display_pro_detail();//file se read karana
           // add_to_cart();
            break;
            case 2:
            	      	//	FILE *fptr;
                 //char ch;
                  fptr = fopen("women.txt", "r");
                 if (fptr == NULL)
    {
                printf("Cannot open file \n");
              exit(0);
    }
  
           fptr = fopen("women.txt", "r");
             while (ch!='*')
    {
         ch = fgetc(fptr);
                printf ("%c", ch);

    }
            pro_detail();
             display_pro_detail();//file se read karana
           // add_to_cart();
            break;
            case 3:
            	      	//	FILE *fptr;
                // char ch;
                  fptr = fopen("kid.txt", "r");
                 if (fptr == NULL)
    {
                printf("Cannot open file \n");
              exit(0);
    }
  
           fptr = fopen("kid.txt", "r");
             while (ch!=',')
    {
         ch = fgetc(fptr);
                printf ("%c", ch);

    }
            pro_detail();
             display_pro_detail();//file se read karana
           // add_to_cart();
            break;
            
            case 4:
            	      	//	FILE *fptr;
                 //char ch;
                  fptr = fopen("kid.txt", "r");
                 if (fptr == NULL)
    {
                printf("Cannot open file \n");
              exit(0);
    }
  
           fptr = fopen("kid.txt", "r");
             while (ch!=',')
    {
         ch = fgetc(fptr);
                printf ("%c", ch);

    }
            pro_detail();
             display_pro_detail();//file se read karana
           // add_to_cart();
            break;
            case 5:
            	      	//	FILE *fptr;
                 //char ch;
                  fptr = fopen("items.txt", "r");
                 if (fptr == NULL)
    {
                printf("Cannot open file \n");
              exit(0);
    }
  
           fptr = fopen("items.txt", "r");
             while (ch!='*')
    {
         ch = fgetc(fptr);
                printf ("%c", ch);

    }
            pro_detail();
             display_pro_detail();//file se read karana
           // add_to_cart();
            
            default:
            cout<<"No option";
            
        }
          
          
       }
      /*
       if(n==2)
       {
            cout<<"Men \t "<<"press [1]" <<endl;
          cout<<"Women \t press [2]"<<endl;
          cout<<"kid \t "<<"press [3]" <<endl;
          cout<<"Babay \t "<<"press [4]" <<endl;
          cin>>m;
             case 1:
          switch(m)
          {
             pro_detail();   //user se enter karna ur file mai bhi write krna 
             display_pro_detail();//file se read karana
             add_to_cart();
             break;
             case 2:
             pro_detail();
             display_pro_detail();//file se read karana
             add_to_cart();
              break;
             case 3:
             pro_detail();
             display_pro_detail();//file se read karana
             add_to_cart();
              break;
            
              case 4:
              pro_detail();
             display_pro_detail();//file se read karana
             add_to_cart();
             break;
             default:
             cout<<"No option";
            
            }
       }*/
   }
   else
   {
   	cout<<"please enter cloth\n";
   	category();
   }
}



void control:: pro_detail()
            {
            	int i,qty,price_range;
                char color[50],cloth_materal[100],size[50];
            //	cout<<"Enetr 1 to see the collection"<<endl;
            
			//	cin>>i;
            //	if(i==1)
            	//file bana product ki ur read karana
				
				cout<<"\nEnter your choice\n"<<endl;
				cin>>choice;
				cout<<"\nEnter size \n ";
				cin>>size;
				cout<<"\nEnter quntity \n";
				cin>>qty;
				cout<<"\nEnter price Range \n";
				cin>>price_range;
				cout<<"\nEnter cloth materal \n";
				cin>>cloth_materal;
				
				
			}
		void control:: display_pro_detail()
			{
				cout<<"PRESS 1 for TO GET DETAIL OF PRODUCT \n";
				int k;
				    FILE *fptr;
                 char ch;
				cin>>k;
				if(k==1)
{
					if(stricmp(choice,"sonata")==0)
	           {
					
                  fptr = fopen("sonata.txt", "r");
                 if (fptr == NULL)
               {
                printf("Cannot open file \n");
              exit(0);
           }
  
                 fptr = fopen("sonata.txt", "r");
                  while (ch!='*')
           {
                 ch = fgetc(fptr);
                printf ("%c", ch);

            }
					
	}
	
		if(stricmp(choice,"shirt")==0)
	           {
					
                  fptr = fopen("shirt.txt", "r");
                 if (fptr == NULL)
               {
                printf("Cannot open file \n");
              exit(0);
           }
  
                 fptr = fopen("shirt.txt", "r");
                  while (ch!='*')
           {
                 ch = fgetc(fptr);
                printf ("%c", ch);

            }
					
	}
		if(stricmp(choice,"Sandal")==0)
	           {
					
                  fptr = fopen("Sandal.txt", "r");
                 if (fptr == NULL)
               {
                printf("Cannot open file \n");
              exit(0);
           }
  
                 fptr = fopen("Sandal.txt", "r");
                  while (ch!='*')
           {
                 ch = fgetc(fptr);
                printf ("%c", ch);

            }
					
	}
		if(stricmp(choice,"salwars")==0)
	           {
					
                  fptr = fopen("salwars.txt", "r");
                 if (fptr == NULL)
               {
                printf("Cannot open file \n");
              exit(0);
           }
  
                 fptr = fopen("salwars.txt", "r");
                  while (ch!='*')
           {
                 ch = fgetc(fptr);
                printf ("%c", ch);

            }
					
	}
		if(stricmp(choice,"sport")==0)
	           {
					
                  fptr = fopen("shoes.txt", "r");
                 if (fptr == NULL)
               {
                printf("Cannot open file \n");
              exit(0);
           }
  
                 fptr = fopen("shoes.txt", "r");
                  while (ch!='*')
           {
                 ch = fgetc(fptr);
                printf ("%c", ch);

            }
					
	}
					
					//call file which having detail of that product;
					cout<<"\nIF YOU NOT SATISFIY PRESS NO\n";
					char s1[50];
					cin>>s1;
				if(stricmp(s1,"No")==0)
					{
					pro_detail();
					
					exit;	//break;
					}
					else
					{
					exit;	
						
					}
					cout<<"TO BUY      Press [1] \n";
					int x;
					cin>>x;
					if(x==1)
					{
					
					 conform();
					 exit(1);
				}
				
					
		        }
			}
		void control::conform()
		{
	
			char add[100],pin[100];
			long int mob,*p;
			cout<<"\t\t\t\tYOU CHOOSE ! \t\t\t"<<choice;
			cout<<"\n\nPlease Enter deliver Address\n";
			cin>>add;
			cout<<"\nPlease Enter deliver PIN-Code\n";
			cin>>pin;
			cout<<"\nEnter Mobile Number :\n";
			cin>>mob;
			
			
	cout<<"\n\n\t\t\t\tClick submit button!\n";
	cout<<"\n\n\t\t\tYOUR ORDER ID:"<<p;
			
		}

int main()
{
	control c[100];
	for(int i=0;i<100;i++)
	{
	
	c[i].view();
	c[i].detail();
	c[i].sign();
	//c1.category();
	c[i].category();
  c[i].pro_detail();
  c[i].display_pro_detail();
}
  return 0;
}
































