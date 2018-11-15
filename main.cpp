#include <iostream>
#include <fstream>
using namespace std;
string name;
int main()
{
   void review();
   void billing();
   void book();

   int c=0;
   cout<<"****************WELCOME TO BMW********************"<<endl;
   cout<<"\n";
   cout<<"please enter your name"<<endl;
   cin>>name;
    ofstream myfile;
      myfile.open ("c++pro.txt");
      myfile << "Name Of The Customer:"<<name;
      //myfile << "contact number:"<<num;
      myfile.close();
   cout<<"DEAR CUSTOMER ENTER \n1. FOR CAR REVIEW,TO KNOW THE FEATURES OF THE CAR \n2. TO BOOK A CAR "<<endl;
   cin>>c;
   if(c==1)
   {
       cout<<"YOU HAVE SELECTED FOR CAR REVIEW"<<endl;
       review();

   }
   else if(c==2)
  {
        cout<<"YOU HAVE SELECTED TO BOOK A CAR";
        book();
   }
   else
   {
       cout<<"wrong option";
   }
}
void billing(int cp,int choice)
{
                      int rto=30433;
                      int ins=250058;
                      int on_road=cp+rto+ins;
                      //now=datetime.datetime.now()
                       string ph;
                        cout<<"please enter your contact number"<<endl;
                        cin>>ph;
                        cout<<"\n";
                       // int num=ph;
                      cout<<"****************************************NAVNEET MOTORS********************************************"<<endl;
                      ifstream myReadFile;
                      myReadFile.open("c++pro.txt");
                      char output[100];
                      if (myReadFile.is_open()) {
                      while (!myReadFile.eof()) {
                            myReadFile >> output;
                            cout<<output;
                        }
                        }
                      cout<<"\n";
                      cout<<"Contact Number:"<<ph<<endl;
                      cout<<"\n";
                      myReadFile.close();
                      cout<<"Branch:"<<"\t BMW \n \t Navneet Motors \n \t Electronic city \n \t bangalore 560100"<<endl;
                      //print(" ",now)
                      cout<<"\n"<<endl;
                      cout<<"CAR Model\t\tOffroad Price \t\tRTO\t\tInsurance \t\tOnroad Price"<<endl;
                      if(choice==1)
                      {
                        cout<<"BMW X1 \t\t\t"<<cp<<"\t\t\t"<<rto<<"\t\t"<<ins<<"\t\t\t"<<on_road<<endl;
                        ofstream myfile;
                        myfile.open ("c++pro.txt");
                            myfile << "contact number:"<<ph;
                            myfile<<"CAR NAME: BMW X1"<<endl;
                            myfile<<"cp= "<<cp<<"RTO= "<<rto<<"insurance= "<<ins<<"total onroad= "<<on_road<<endl;
                            myfile.close();
                      }
                      else if(choice==2)
                      {
                        cout<<"BMW 3series GT \t\t"<<cp<<"\t\t\t"<<rto<<"\t\t"<<ins<<"\t\t\t"<<on_road<<endl;
                        ofstream myfile;
                        myfile.open ("c++pro.txt");
                            myfile << "contact number:"<<ph;
                            myfile<<"cp= "<<cp<<"RTO= "<<rto<<"insurance= "<<ins<<"total onroad= "<<on_road<<endl;
                            myfile.close();
                      }
                      else if(choice==3){
                              cout<<"BMW Z4 \t\t\t"<<cp<<"\t\t\t"<<rto<<"\t\t"<<ins<<"\t\t\t"<<on_road<<endl;
                              ofstream myfile;
                        myfile.open ("c++pro.txt");
                            myfile << "contact number:"<<ph;
                            myfile<<"cp= "<<cp<<"RTO= "<<rto<<"insurance= "<<ins<<"total onroad= "<<on_road<<endl;
                            myfile.close();
                      }
                      else if(choice==4){
                              cout<<"BMW i8 \t\t\t"<<cp<<"\t\t"<<rto<<"\t\t"<<ins<<"\t\t\t"<<on_road<<endl;
                              ofstream myfile;
                        myfile.open ("c++pro.txt");
                            myfile << "contact number:"<<ph;
                            myfile<<"cp= "<<cp<<"RTO= "<<rto<<"insurance= "<<ins<<"total onroad= "<<on_road<<endl;
                            myfile.close();
                      }
                      else{
                              cout<<"THE ENTERED CHOICE IS INVALID PLEASE ENTER A VALID CHOICE"<<endl;
                      }
                      cout<<"\n\n"<<endl;
                      cout<<" THE GRAND TOTAL ="<<on_road<<endl;
                      cout<<" THANKS FOR PURCHASING \n DRIVE SAFE \n HAVE A NICE DAY"<<endl;

}




void book()
{
        int option;
        cout<<"PLEASE ENTER YOUR CHOICE, CAR THAT SHOULD BE BOOKED \n 1:-BMW X1 \n 2:-BMW 3 Series GT  \n 3:-BMW Z4 \n 4:-BMW i8  "<<endl;
        cin>>option;
        if(option==1)
        {

                int n;
                cout<<"you have selected to book BMW X1 "<<endl;
                cout<<"THE OFF ROAD PRICE OF BMW X1 is 30.99 lakhs \n ENTER ONE FOR BILLING  "<<endl;
                cin>>n;
                int cp=3099000;
                if(n==1){
                    billing(cp,option);
                }
        }
        else if(option==2)
        {
                int n;
                cout<<"YOU HAVE SELECTED TO BOOK BMW 3 Series GT "<<endl;
                cout<<"THE OFF ROAD PRICE OF BMW X1 is 43.3 lakhs \n ENTER ONE FOR BILLING  "<<endl;
                cin>>n;
                int cp=4330000;
                if(n==1){
                      billing(cp,option);
                }
        }
        else if(option==3)
        {
                int n;
                cout<<"YOU HAVE SELECTED TO BOOK BMW Z4 "<<endl;
                cout<<"THE OFFROAD PRICE OF Z4 IS 70 LAKHS \n ENTER ONE FOR BILLING"<<endl;
                cin>>n;
                int cp=7000000;
                if(n==1){
                        billing(cp,option);
                }
        }
        else if(option==4)
        {
                      int n;
                      cout<<"YOU HAVE SELECTED TO BOOK BMW i8 "<<endl;
                      cout<<"THE OFF ROAD PRICE OF BMW i8 IS 2.14 Crores \n ENTER ONE FOR BILLING"<<endl;
                      cin>>n;
                      int cp=21400000;
                      if(n==1){
                        billing(cp,option);
                      }
        }
}
void review()
{
    int choice;
    cout<<"PLEASE ENTER YOUR CHOICE \nCAR THAT YOU NEED THE FEATURES OF \n 1:- BMW X1  \n 2:- BMW 3 Series GT  \n 3:- BMW Z4 \n 4:- BMW i8 "<<endl;
    cout<<"THE UPCOMING CAR IN INDIA IS BMW 4 Series   "<<endl;
    cin>>choice;

   // string car[5]={"BMW X1","BMW 3 Series GT","BMW Z4","BMW i8","BMW 4 Series"};
    //cout<<"YOU HAVE SELECTED "<<car[choice-1]<<" FOR REVIEW "<<endl;
    if(choice==1)
    {
		cout<<"YOU HAVE SELECTED  BMW X1"<<endl;
		cout<<"Engines :\n 1995 cc, Diesel, 188 bhp @ 4000 RPM power"<<endl;
		cout<<" Gearboxes :\n 8-speed, Automatic, 4WD / AWD \n 8-speed, Automatic, Front Wheel Drive"<<endl;
		cout<<" Seating Capacity \n 5 seater \n Steering \n Power steering"<<endl;
		cout<<"BMW X1 User Reviews \n An absolute delight to own ,not only makes heads turn but does superbly on the road. for BMW X1 \n Own this car and nice and happening car.Exterior Looks are really good. It looks completely like other BMW cars and front mesh and grill with the lamps look real good."<<endl;
		cout<<"\n\n\n\n\nenter '1' to book the car \n enter '2' to check other cars"<<endl;
		int c;
		cin>>c;
        if(c==1){
            book();
        }
        else if(c==2){
            review();
        }
        else{
        cout<<"INVALID INPUT"<<endl;
        }
    }
    else if(choice==2)
    {
        cout<<"YOU HAVE SELECTED BMW 3 series GT"<<endl;
        cout<<"Gearboxes:-"<<endl;
        cout<<"8-speed, Automatic, Rear Wheel Drive"<<endl;
		cout<<"Seating Capacity:-"<<endl;
		cout<<"5 seater"<<endl;
        cout<<"Steering:-"<<endl;
		cout<<"Power steering"<<endl;
		cout<<"BMW 3 Series GT Review"<<endl;
		cout<<"BMW had introduced the GT series to India with the 5 Series first. The car was big and spacious but costed a bomb.\n With the 3 Series GT coming in three years back, the GT badge became more affordable."<<endl;
		cout<<"\n\n\n\n\nenter '1' to book the car \n enter '2' to check other cars"<<endl;
		int c;
		cin>>c;
        if(c==1){
            book();
        }
        else if(c==2){
            review();
        }
        else{
        cout<<"INVALID INPUT"<<endl;
        }

    }
    else if(choice==3)
    {

        //print("YOU HAVE SELECTED BMW Z4"
        cout<<"YOU HAVE SELECTED BMW Z4"<<endl;
		cout<<"BMW will launch the facelifted Z4 roadster for the Indian market on November 14. It has been the mainstay of the German automaker’s CBU range.\n The Z4 has been on sale in India since 2009 and since then has received only one update. The 2014 Z4 is the last in this series as BMW will unveil and eventually launch an all-new Z4 next year"<<endl;
		cout<<"Engines \n 2979 cc, Petrol, 302 bhp 5800 RPM power"<<endl;
		cout<<"Gearboxes \n 7-speed, Automatic, RWD \n Seating Capacity \n 2 seater \n Steering \n Power steering"<<endl;
		cout<<"for BMW Z4 \n Exterior Looks awesome. Interior (Features, Space & Comfort) Enough space for two ppl. small trunk space. Engine Performance, Fuel Economy and Gearbox Just awesome."<<endl;
        cout<<"\n\n\n\n\nenter '1' to book the car \n enter '2' to check other cars"<<endl;
		int c;
		cin>>c;
        if(c==1){
            book();
        }
        else if(c==2){
            review();
        }
        else{
        cout<<"INVALID INPUT"<<endl;
        }

    }
	else if(choice==4)
	{

        cout<<"YOU HAVE SELECTED BMW I8";
		cout<<"Engine capacity1499 cc \n Fuel Economy (ARAI)47.45 kmpl \n Power357bhp @ 5800rpm \n Torque570Nm @ 3700rpm \n Body StyleLuxury \n Ideal for4 \n Safety techTraction control, EBDCreature comfortsAC, Power windows YES, Audio System Type, Seat Adjustment \n Fuel economy information has been updated as of 11/5/2012 to reflect EPA-corrected fuel economy estimates for certain 2011-2013 Hyundai models.";
		cout<<"\n\n\n\n\nenter '1' to book the car \n enter '2' to check other cars"<<endl;
		int c;
		cin>>c;
        if(c==1){
            book();
        }
        else if(c==2){
            review();
        }
        else{
        cout<<"INVALID INPUT"<<endl;
        }
	}

	else{
		cout<<"error";
    }

}

