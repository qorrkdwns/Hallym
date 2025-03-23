using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
//2주차 실습

    int iVal = 30000;
    const Int32 cVal = 0X3ABC; //0X3ABC == 15036

    iVal = iVal + cVal;

    Console.WriteLine(iVal);

    //short iVal2 = iVal;

    Console.WriteLine(int.MaxValue);
    Console.WriteLine(UInt64.MinValue);
    Console.WriteLine(short.Parse("1234") + 4321);
    Console.WriteLine(cVal.ToString() + " *** " + 2000.ToString());



float fVar = 4.5f;
double dVar = -123.45E-1;
decimal dcmVar = 2.238_61E3M;

Console.WriteLine(fVar + float.Parse("5.0"));
Console.WriteLine(dVar.ToString() + " -> " + (-123.45E-1).ToString());
Console.WriteLine(dcmVar + 1_000.0M);

Console.WriteLine(dVar / 0.0D);
Console.WriteLine(double.PositiveInfinity - double.PositiveInfinity);
Console.WriteLine(System.Double.NegativeInfinity / System.Double.PositiveInfinity);



bool bVar1 = true;
Boolean bVar2 = false;
const bool TRUE = true;

Console.WriteLine(bVar1);
Console.WriteLine(bVar2.ToString());
Console.WriteLine(TRUE.ToString());
Console.WriteLine(false.ToString());



char chA = '가';
System.Char chB = '\uAC11';
char tab = '\t';
const Char NewLine = '\n';



Console.WriteLine(chA);
Console.WriteLine(NewLine);
Console.WriteLine(tab);
Console.WriteLine(chB);



char ch = 'a';
Console.WriteLine(Char.IsLower(ch));
Console.WriteLine(Char.IsUpper(ch));
Console.WriteLine(Char.IsLetter(ch));
Console.WriteLine(Char.IsNumber(ch));



String str = "Coding";
Console.WriteLine(str.Length);
Console.WriteLine(str.IndexOf("in"));
Console.WriteLine(str.ToUpper());
Console.WriteLine(str.StartsWith("Co"));
Console.WriteLine(str.Remove(2, 2));
Console.WriteLine(string.Concat(str, " is fun!"));



string str = "Coding";
Console.WriteLine(str[^4]); // ^n : 역순 
Console.WriteLine(str[1..3]);
Console.WriteLine(str[^4..^1]);

Console.WriteLine(str.ToUpper());
Console.WriteLine(str.StartsWith("C"));

str = string.Format("Name: {0}, Age: {1}, Nationality: {2}", "Tom", 23, "Korea");
Console.WriteLine(str);

int iVal = 12345;
double dVal = 3.14519;

Console.WriteLine(string.Format("A{0,10:D}A", iVal)); // 0 ~ 10칸 중 뒤에 채움(공백이 앞에 존재)
Console.WriteLine(string.Format("A{0,-10:F2}A", dVal)); // 0 ~ 10칸 중 앞에 채움(공백이 뒤에 존재)

Console.WriteLine($"A{iVal,10:D}A");
Console.WriteLine($"A{ 3.14519,-10:F2}A");



int n = 12345;

if(n % 2 == 0)
{
    Console.WriteLine("짝수");
}else
{
    Console.WriteLine("홀수");
}



Console.WriteLine(DateTime.Now);
Console.WriteLine(DateTime.Now.Year);
Console.WriteLine(DateTime.Now.Month);
Console.WriteLine(DateTime.Now.Day);
Console.WriteLine(DateTime.Now.Hour);
Console.WriteLine(DateTime.Now.Minute);
Console.WriteLine(DateTime.Now.Second);
