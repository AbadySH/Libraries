

//Objects with Parameterized Constructor and Array

#include<iostream>
#include<vector>

#include"clsString.h"
#include"clsEmployee.h"
#include"clsDate.h"
#include"clsPeriod.h"

using namespace std;

int main()

 {   clsString String1;
     clsString String2 ("Mohammed");
    clsEmployee Employee(10," Ali ", "Osama", " Ab1234@g.com", " +788332333", " Developer", " SW", 8500) ;

    String1.setValue("Ahmed and i went to the shop and we got some coffee");
    String2.setValue("Ahmed ,and i ,went to ,the shop a.nd w.,e got some coffee");
    
    
//    cout<<String1. ConvertNumbeToText()<<endl;
//    cout<<clsString::ConvertNumbeToText(7000)<< " US $ "<<endl;
    
//    cout<< String1.lenght()<<endl;
//    cout<<"\n/n##############################################/n\n";
//    cout<< String1.LowerAllLatterOfTheString()<<endl;
//    cout<< String1.UpperAllLatterOfTheString()<<endl;
//    cout<< String1.UpperFirstLatterOfEachWord()<<endl;
//    cout<<"\n/n##############################################/n\n";
//    cout<<"\n/n##############################################/n\n";
//    cout<< String1.Isvowel()<<endl;
//    cout<<"\n/n##############################################/n\n";
//   // cout<< String1.InvertLatterCase()<<endl;
//    cout<< String1.InvertAllStringLatterCase()<<endl;
//    cout<<"\n/n##############################################/n\n";
//    cout<< String1.CountACaptelLatterOfTheString()<<endl;
//    cout<< String1.CountASmallLatterOfTheString()<<endl;
//    cout<<"\n/n##############################################/n\n";
//    cout<< String1.CountAAllLatterOfTheString()<<endl;
//    
//    cout<<"\n/n##############################################/n\n";
//    cout<< String1.CountSpecificCharInString()<<endl;
//    cout<<"\n/n##############################################/n\n";
//    cout<<String1.PrintFirstLetterOfEachWord()<<endl;
//    cout<<"\n/n##############################################/n\n";
//    cout<< String1.ReverseWordsInString()<<endl;
//    cout<<"\n/n##############################################/n\n";
//    
//    cout<< String1.SplitString()<<endl;
//    
//    cout<<"\n/n##############################################/n\n";
//    cout<< String1.CountVowelstring()<<endl;
//    cout<<"\n/n##############################################/n\n";
//    cout<< String1.JoinString()<<endl;
//    cout<<"\n/n##############################################/n\n";
//    cout<< String2.RemovePaunctuationsFromString()<<endl;
//    cout<<"\n/n##############################################/n\n";
//    cout<< String1.TirmLeft()<<endl;
//    cout<< String1.TirmRight()<<endl;
//    cout<< String1.Tirm()<<endl;
//    
//    cout<<"\n/n##############################################/n\n";
//    cout<<"\n/n##############################################/n\n";
//    cout<<String1.ReplacewordInStringUsingSpilt()<<endl;
    

//    cout<<"\n/n##############################################/n\n";
//    cout<<"\n/n##############################################/n\n";
//    
//    Employee.Print();
//    
//    Employee.SendEmail(" New task ", " Hello , PLZ Send us the reports ASP! ");
//    cout<<"\n/n##############################################/n\n";
//    Employee.SendSMS(" Hi Talqad , Send me My money back !!!\n ");
//    
//    clsDate Date1;
//    Date1.Print();
//    clsDate Date2("31/1/2026");
//    Date2.Print();
//    clsDate Date3(20, 12, 2026);
//    Date3.Print();
//    clsDate Date4(250,2026);
//    Date4.Print();
//    Date1.IncreaseDateByOneMonth();
//    Date1.Print();
//   Date3.PrintYearCalendar();
// cout << Date2.IsValid() << endl;
//    cout << "My Age InDays:" <<
//    clsDate::CalculateMyAgeInDays( clsDate(6, 11, 2002) )<<endl;
//    
//    Date1.Print();
   
    
//    clsPeriod Period1(clsDate(8, 6, 2022), clsDate(8, 6, 2026));
//        Period1.Print();
//
//        cout << "\n";
//
//        clsPeriod Period2(clsDate(3, 1, 2022), clsDate(5, 1, 2022));
//        Period2.Print();
//
//
//        //You can check like this
//        cout << Period1.IsOverLapWith(Period2) <<endl;
//
//
//        //Also you can call the static method and send period 1 and period 2
//        cout << clsPeriod::IsOverlapPeriods(Period1, Period2) << endl;

    return 0;

}
