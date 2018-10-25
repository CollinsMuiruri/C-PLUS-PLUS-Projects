#include <iostream>
using namespace std;

int main()
{
    int income,gross_tax;
    
    cout<<"Input your income: \n";
    cin>>income;
    
        if (income>=0 && income<=147580){
            cout<<"Your gross salary is: "<<income<<"\n"
            <<"Your tax rate is 10%.\n"<<"Your deducted amount is: "
            <<(income*10/100)<<"\n"<<"Your NET salary is: "
            <<income-(income*10/100);
        }
        else if (income>=147581 && income<=286623){
            cout<<"Your gross salary is: "<<income<<"\n"
            <<"Your tax rate is 10%.\n"<<"Your deducted amount is: "
            <<(income*15/100)<<"\n"<<"Your NET salary is: "
            <<income-(income*15/100);
        }
        else if (income>=286624 && income<=425666){
            cout<<"Your gross salary is: "<<income<<"\n"
            <<"Your tax rate is 10%.\n"<<"Your deducted amount is: "
            <<(income*20/100)<<"\n"<<"Your NET salary is: "
            <<income-(income*20/100);
        }
        else if (income>=425667 && income<=564709){
            cout<<"Your gross salary is: "<<income<<"\n"
            <<"Your tax rate is 10%.\n"<<"Your deducted amount is: "
            <<(income*25/100)<<"\n"<<"Your NET salary is: "
            <<income-(income*25/100);
        }
        else if (income>=564710){
            cout<<"Your gross salary is: "<<income<<"\n"
            <<"Your tax rate is 10%.\n"<<"Your deducted amount is: "
            <<(income*30/100)<<"\n"<<"Your NET salary is: "
            <<income-(income*30/100); 
        }
    return 0;
}
