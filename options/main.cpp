#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
int choic, val;
   cout<<" 1) Data Bundle"<<endl;
   cout<<" 2) Combo Bundle"<<endl;
   cout<<" 3) Browse from Main Account"<<endl;
   cout<<" 4) Check Bundle Balance"<<endl;
   cout<<" 5) Notifications"<<endl;
   cout<<" 6) Exit"<<endl;
   do {
      cout << "  " << endl;
      cout<<"Enter choice: "<<endl;
      cin>>choic;
      switch(choic) {
         case 1: {
   cout << "  " << endl;
   cout<<" 1) GHC 5"<<endl;
   cout<<" 2) GHC 10"<<endl;
   cout<<" 3) GHC 100"<<endl;
   cout<<" 4) Midnight"<<endl;
   cout<<" 5) Social Media"<<endl;
   cout<<" 6) Exit "<<endl;
   int ch;
   do {
      cout << "  " << endl;
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
             cout << "  " << endl;
             cout << " GHC 5 gives you 200MB. Are you sure you want to purchase this? " << endl;
             cout << " 1. Yes " << endl;
             cout << " 2. No" << endl;
             do {
      cout << "  " << endl;
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
             cout << "  " << endl;
             cout << " Purchased! Thank you for using EHMANA " << endl;
             exit(0);
         }

         case 2: {
             exit(0);
         }
         default: {
             cout << "         " << endl;
            cout<<"Your Input is Invalid!! Kindly Try Again Please. "<<endl;
            exit(00);
            break;
         }
         }
   }while (ch < 3);
            break;
         }
          case 2: {
             cout << "  " << endl;
             cout << " GHC 10 gives you 500MB. Are you sure you want to purchase this " << endl;
             cout << " 1. Yes " << endl;
             cout << " 2. No" << endl;
             do {
      cout << "  " << endl;
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
             cout << "  " << endl;
             cout << " Purchased! Thank you for using EHMANA " << endl;
             exit(0);
         }

         case 2: {
             exit(0);
         }
         default: {
             cout << "         " << endl;
            cout<<"Your Input is Invalid!! Kindly Try Again Please. "<<endl;
            exit(00);
            break;
         }
         }
   }while (ch <3);
            break;
          }
          case 3: {
             cout << "  " << endl;
             cout << " GHC 100 gives you 6GB. Are you sure you want to purchase this " << endl;
             cout << " 1. Yes " << endl;
             cout << " 2. No" << endl;
             do {
      cout << "  " << endl;
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
             cout << "  " << endl;
             cout << " Purchased! Thank you for using EHMANA " << endl;
             exit(0);
         }

         case 2: {
             exit(0);
         }
                  default: {
             cout << "         " << endl;
            cout<<"Your Input is Invalid!! Kindly Try Again Please. "<<endl;
            exit(00);
            break;
         }
         }
   }while (ch < 3);
            break;
          }
          case 4: {
   cout << "  " << endl;
   cout<<" 1) GHC 3"<<endl;
   cout<<" 2) GHC 5"<<endl;
   do {
      cout << "  " << endl;
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
             cout << "  " << endl;
             cout << " GHC 3 gives you 5.5GB. Are you sure you want to purchase this? " << endl;
             cout << " 1. Yes " << endl;
             cout << " 2. No" << endl;
             do {
      cout << "  " << endl;
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
             cout << "  " << endl;
             cout << " Purchased! Thank you for using EHMANA " << endl;
             exit(0);
         }

         case 2: {
             exit(0);
         }
        default: {
             cout << "         " << endl;
            cout<<"Your Input is Invalid!! Kindly Try Again Please. "<<endl;
            exit(00);
            break;
         }
         }
   }while (ch < 3);
            break;
         }
          case 2: {
             cout << "  " << endl;
             cout << " GHC 5 gives you 8.8GB. Are you sure you want to purchase this " << endl;
             cout << " 1. Yes " << endl;
             cout << " 2. No" << endl;
             do {
      cout << "  " << endl;
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
             cout << "  " << endl;
             cout << " Purchased! Thank you for using EHMANA " << endl;
             exit(0);
         }

         case 2: {
             exit(0);
         }
        default: {
             cout << "         " << endl;
            cout<<"Your Input is Invalid!! Kindly Try Again Please. "<<endl;
            exit(00);
            break;
         }
         }
   }while (ch <3);
            break;
          }
                   default: {
             cout << "         " << endl;
            cout<<"Your Input is Invalid!! Kindly Try Again Please. "<<endl;
            break;
         }
            }
          }while (ch != 4);
        }
        case 5: {
   cout << "  " << endl;
   cout<<" 1) GHC 1"<<endl;
   cout<<" 2) GHC 5"<<endl;
   do {
      cout << "  " << endl;
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
             cout << "  " << endl;
             cout << " GHC 1 gives you 100MB. Are you sure you want to purchase this? " << endl;
             cout << " 1. Yes " << endl;
             cout << " 2. No" << endl;
             do {
      cout << "  " << endl;
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
             cout << "  " << endl;
             cout << " Purchased! Thank you for using EHMANA " << endl;
             exit(0);
         }

         case 2: {
             exit(0);
         }
                  default: {
             cout << "         " << endl;
            cout<<"Your Input is Invalid!! Kindly Try Again Please. "<<endl;
            exit(00);
            break;
         }
         }
   }while (ch < 3);
            break;
         }
          case 2: {
             cout << "  " << endl;
             cout << " GHC 5 gives you 700MB. Are you sure you want to purchase this " << endl;
             cout << " 1. Yes " << endl;
             cout << " 2. No" << endl;
             do {
      cout << "  " << endl;
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
             cout << "  " << endl;
             cout << " Purchased! Thank you for using EHMANA " << endl;
             exit(0);
         }

         case 2: {
             exit(0);
         }
          default: {
          cout << "         " << endl;
          cout<<"Your Input is Invalid!! Kindly Try Again Please. "<<endl;
          exit(00);
          break;
         }
         }
   }while (ch <3);
            break;
          }
            default: {
            cout << "         " << endl;
            cout<<"Your Input is Invalid!! Kindly Try Again Please. "<<endl;
            break;
         }
            }
          }while (ch != 4);
        }
         case 6: {
             exit(0);
      }
         default: {
             cout << "         " << endl;
            cout<<"Your Input is Invalid!! Kindly Try Again Please. "<<endl;
         }
   }
          }while (choic !=7);
            break;
         }











         case 2: {
   cout << "  " << endl;
   cout<<" 1) SMS Bundles"<<endl;
   cout<<" 2) IDD Bundles"<<endl;
   cout<<" 3) Super Saver Bundles"<<endl;
   do {
      cout << "  " << endl;
      cout<<"Enter choice: "<<endl;
      cin>>val;
      switch(val) {
         case 1: {
   cout << "  " << endl;
   cout<<" 1) GHC 1"<<endl;
   cout<<" 2) GHC 2"<<endl;
   cout<<" 3) GHC 5"<<endl;
   cout<<" 4) GHC 10"<<endl;
  do {
      cout << "  " << endl;
      cout<<" Enter choice: "<<endl;
      cin>>val;
      switch(val) {
         case 1: {
             cout << "  " << endl;
             cout << " GHC 1 gives you 50 SMS to message all Networks. Are you sure you want to purchase this? " << endl;
             cout << " 1. Yes " << endl;
             cout << " 2. No" << endl;
             do {
      cout << "  " << endl;
      cout<<" Enter choice: "<<endl;
      cin>>val;
      switch(val) {
         case 1: {
             cout << "  " << endl;
             cout << " Purchased! Thank you for using EHMANA " << endl;
             exit(0);
         }

         case 2: {
             exit(0);
         }
         }
   }while (val < 3);
            break;
         }
          case 2: {
             cout << "  " << endl;
             cout << " GHC 2 gives you 120 SMS to message all Networks. Are you sure you want to purchase this " << endl;
             cout << " 1. Yes " << endl;
             cout << " 2. No" << endl;
             do {
      cout << "  " << endl;
      cout<<" Enter choice: "<<endl;
      cin>>val;
      switch(val) {
         case 1: {
             cout << "  " << endl;
             cout << " Purchased! Thank you for using EHMANA " << endl;
             exit(0);
         }

         case 2: {
             exit(0);
         }
         }
   }while (val <3);
            break;
          }
          case 3: {
             cout << "  " << endl;
             cout << " GHC 5 gives you 220 SMS to message all Networks. Are you sure you want to purchase this " << endl;
             cout << " 1. Yes " << endl;
             cout << " 2. No" << endl;
             do {
      cout << "  " << endl;
      cout<<" Enter choice: "<<endl;
      cin>>val;
      switch(val) {
         case 1: {
             cout << "  " << endl;
             cout << " Purchased! Thank you for using EHMANA " << endl;
             exit(0);
         }

         case 2: {
             exit(0);
         }
         }
   }while (val <3);
            break;
          }
          case 4: {
             cout << "  " << endl;
             cout << " GHC 10 gives you 600 SMS to message all Networks. Are you sure you want to purchase this " << endl;
             cout << " 1. Yes " << endl;
             cout << " 2. No" << endl;
             do {
      cout << "  " << endl;
      cout<<" Enter choice: "<<endl;
      cin>>val;
      switch(val) {
         case 1: {
             cout << "  " << endl;
             cout << " Purchased! Thank you for using EHMANA " << endl;
             exit(0);
         }

         case 2: {
             exit(0);
         }
         }
   }while (val <3);
            break;
          }
            }
          }while (val != 4);

         }
         case 2: {
   cout << "  " << endl;
   cout<<" 1) GHC 2"<<endl;
   cout<<" 2) GHC 5"<<endl;
   cout<<" 3) GHC 10"<<endl;
  do {
      cout << "  " << endl;
      cout<<" Enter choice: "<<endl;
      cin>>val;
      switch(val) {
         case 1: {
             cout << "  " << endl;
             cout << " GHC 2 gives you 50 minutes for International Calls. Are you sure you want to purchase this? " << endl;
             cout << " 1. Yes " << endl;
             cout << " 2. No" << endl;
             do {
      cout << "  " << endl;
      cout<<" Enter choice: "<<endl;
      cin>>val;
      switch(val) {
         case 1: {
             cout << "  " << endl;
             cout << " Purchased! Thank you for using EHMANA " << endl;
             exit(0);
         }

         case 2: {
             exit(0);
         }
         }
   }while (val < 3);
            break;
         }
          case 2: {
             cout << "  " << endl;
             cout << " GHC 5 gives you 100 minutes for International Calls. Are you sure you want to purchase this " << endl;
             cout << " 1. Yes " << endl;
             cout << " 2. No" << endl;
             do {
      cout << "  " << endl;
      cout<<" Enter choice: "<<endl;
      cin>>val;
      switch(val) {
         case 1: {
             cout << "  " << endl;
             cout << " Purchased! Thank you for using EHMANA " << endl;
             exit(0);
         }

         case 2: {
             exit(0);
         }
         }
   }while (val <3);
            break;
          }
          case 3: {
             cout << "  " << endl;
             cout << " GHC 10 gives you 320 minutes for International Calls. Are you sure you want to purchase this " << endl;
             cout << " 1. Yes " << endl;
             cout << " 2. No" << endl;
             do {
      cout << "  " << endl;
      cout<<" Enter choice: "<<endl;
      cin>>val;
      switch(val) {
         case 1: {
             cout << "  " << endl;
             cout << " Purchased! Thank you for using EHMANA " << endl;
             exit(0);
         }

         case 2: {
             exit(0);
         }
         }
   }while (val <3);
            break;
          }
      }
  }while(val <4);
         }
         case 3: {
   cout << "  " << endl;
   cout<<" 1) GHC 2"<<endl;
   cout<<" 2) GHC 5"<<endl;
   cout<<" 3) GHC 50"<<endl;
  do {
      cout << "  " << endl;
      cout<<"Enter choice: "<<endl;
      cin>>val;
      switch(val) {
         case 1: {
             cout << "  " << endl;
             cout << " GHC 10 gives you 158 MB,158 Mins & 100 SMS. Are you sure you want to purchase this? " << endl;
             cout << " 1. Yes " << endl;
             cout << " 2. No" << endl;
             do {
      cout << "  " << endl;
      cout<<" Enter choice: "<<endl;
      cin>>val;
      switch(val) {
         case 1: {
             cout << "  " << endl;
             cout << " Purchased! Thank you for using EHMANA " << endl;
             exit(0);
         }

         case 2: {
             exit(0);
         }
         }
   }while (val < 3);
            break;
         }
          case 2: {
             cout << "  " << endl;
             cout << " GHC 20 gives you 427 MB, 427 Mins & 100 SMS. Are you sure you want to purchase this " << endl;
             cout << " 1. Yes " << endl;
             cout << " 2. No" << endl;
             do {
      cout << "  " << endl;
      cout<<"Enter choice: "<<endl;
      cin>>val;
      switch(val) {
         case 1: {
             cout << "  " << endl;
             cout << " Purchased! Thank you for using EHMANA " << endl;
             exit(0);
         }

         case 2: {
             exit(0);
         }
         }
   }while (val <3);
            break;
          }
          case 3: {
             cout << "  " << endl;
             cout << " GHC 50 gives you 1GB, 1,152 Mins & 100 SMS. Are you sure you want to purchase this " << endl;
             cout << " 1. Yes " << endl;
             cout << " 2. No" << endl;
             do {
      cout << "  " << endl;
      cout<<"Enter choice: "<<endl;
      cin>>val;
      switch(val) {
         case 1: {
             cout << "  " << endl;
             cout << " Purchased! Thank you for using EHMANA " << endl;
             exit(0);
         }

         case 2: {
             exit(0);
         }
         }
   }while (val <3);
            break;
          }
      }
  }while(val <4);
         }
      }
   }while (val <4);
            break;
         }
         case 3: {
             cout << "      " << endl;
             cout << " 1. Start " << endl;
             cout << " 2. Stop " << endl;
             do {
      cout << "  " << endl;
      cout<<"Enter choice: "<<endl;
      cin>>val;
      switch(val) {
         case 1: {
             cout << "  " << endl;
             cout << "You are now browsing from Main Account." << endl;
             cout << "Thank You For Using EHMANA " << endl;
             exit(0);
         }

         case 2: {
             cout << "    " << endl;
             cout << "You are no longer browsing from Main Account." << endl;
             cout << "Thank You For Using EHMANA " << endl;
             exit(0);
         }
         default: {
             cout << "         " << endl;
            cout<<"Your Input is Invalid!! Kindly Try Again Please. "<<endl;
            exit (0);
         }
         }
   }while (val < 3);
            break;

            break;
         }
         case 4: {
             cout << "   " << endl;
             cout << "Your Bundle balance " << endl;
             cout << "SMS: ##### SMS" << endl;
             cout << "Internet Bundle: #### MB " << endl;
             exit(0);

         }
         case 5: {
             cout << "      " << endl;
             cout << "Turn notification on/off to know your Balance on Data bundle usage" << endl;
             cout << " 1. On " << endl;
             cout << " 2. Off" << endl;
             do {
      cout << "  " << endl;
      cout<<"Enter choice: "<<endl;
      cin>>val;
      switch(val) {
         case 1: {
             cout << "  " << endl;
             cout << "Notifications has been turned On! You will receive notifications on Data Bundle Usage." << endl;
             cout << "Thank You For Using EHMANA " << endl;
             exit(0);
         }

         case 2: {
             cout << "    " << endl;
             cout << "Notifications has been turned Off! You will no longer receive notifications on Data Bundle Usage." << endl;
             cout << "Thank You For Using EHMANA " << endl;
             exit(0);
         }
         default: {
             cout << "         " << endl;
            cout<<"Your Input is Invalid!! Kindly Try Again Please. "<<endl;
            exit (0);
         }
         }
   }while (val < 3);
            break;
         }
         case 6: {
            exit(0);

         }
         default: {
             cout << "         " << endl;
            cout<<"Your Input is Invalid!! Kindly Try Again Please. "<<endl;
            exit (20);
         }

   }
   }while(choic!=7);
    return 0;
}
