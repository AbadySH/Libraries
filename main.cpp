


#include<iostream>
#include<vector>

#include"clsString.h"
#include"clsEmployee.h"
#include"clsDate.h"
#include"clsPeriod.h"
#include"clsUtil.h"

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
    clsUtil::Srand();
       cout << clsUtil::RandomNumber(1, 10) << endl;
       cout << clsUtil::GetRandomCharacter(clsUtil::CapitalLetter) << endl;
       cout << clsUtil::GenerateWord(clsUtil::MixChars, 8) << endl;
       cout << clsUtil::GenerateKey(clsUtil::MixChars) << endl;
       clsUtil::GenerateKeys(10, clsUtil::MixChars);

       cout << "\n";

       //Swap Int
       int x = 10, y = 20;
       cout << x << " " << y << endl;
       clsUtil::Swap(x, y);
       cout << x << " " << y << endl << endl;

       //Swap double
       double a = 10.5, b = 20.5;
       cout << a << " " << b << endl;
       clsUtil::Swap(a, b);
       cout << a << " " << b << endl << endl;

       //Swap String
       string s1 = "Ali", s2 = "Ahmed";
       cout << s1 << " " << s2 << endl;
       clsUtil::Swap(s1, s2);
       cout << s1 << " " << s2 << endl << endl;

       //Swap Dates
       clsDate d1(1, 10, 2022), d2(1, 1, 2022);
       cout << d1.DateToString() << " " << d2.DateToString() << endl;
       clsUtil::Swap(d1, d2);
       cout << d1.DateToString() << " " << d2.DateToString() << endl;

       //Shuffl Array

       //int array
       int Arr1[5] = { 1,2,3,4,5 };
       clsUtil::ShuffleArray(Arr1, 5);
       cout << "\nArray after shuffle:\n";
       for (int i = 0; i < 5; i++)
       {
           cout << Arr1[i] << endl;
       }

       //string array
       string Arr2[5] = { "Ali","Fadi","Ahmed","Qasem","Khalid" };
       clsUtil::ShuffleArray(Arr2, 5);
       cout << "\nArray after shuffle:\n";
       for (int i = 0; i < 5; i++)
       {
           cout << Arr2[i] << endl;
       }

       int Arr3[5];
       clsUtil::FillArrayWithRandomNumbers(Arr3, 5, 20, 50);
       cout << "\nArray after fill:\n";
       for (int i = 0; i < 5; i++)
       {
           cout << Arr3[i] << endl;
       }


       string Arr4[5];
       clsUtil::FillArrayWithRandomWords(Arr4, 5, clsUtil::MixChars, 8);
       cout << "\nArray after fill:\n";
       for (int i = 0; i < 5; i++)
       {
           cout << Arr4[i] << endl;
       }


       string Arr5[5];
       clsUtil::FillArrayWithRandomKeys(Arr5, 5, clsUtil::MixChars);
       cout << "\nArray after filling keys:\n";
       for (int i = 0; i < 5; i++)
       {
           cout << Arr5[i] << endl;
       }

       cout << "\nText1 " << clsUtil::Tabs(5) << "Text2\n";

       const short EncryptionKey = 2; //this is the key.

       string TextAfterEncryption, TextAfterDecryption;
       string Text = "Abady Alcherif ";
       TextAfterEncryption = clsUtil::EncryptText(Text, EncryptionKey);
       TextAfterDecryption = clsUtil::DecryptText(TextAfterEncryption, EncryptionKey);

       cout << "\nText Before Encryption : ";
       cout << Text << endl;
       cout << "Text After Encryption  : ";
       cout << TextAfterEncryption << endl;
       cout << "Text After Decryption  : ";
       cout << TextAfterDecryption << endl;
 
    return 0;

}
