// See https://aka.ms/new-console-template for more information
//Console.WriteLine("Hello, World!");

namespace HelloWorld
{
    internal class Program
    {
        static void Main(string[] args)
        {
            uint a = 2000000000;
            uint b = 1000000000;
            Console.WriteLine(a + b);
            string str = "Hello\taa\nbb"; //string은 C#에서 표준형이 아니라서 메소드를 사용해 변환해야됨.
            char ch = 'h';
            int num = 100;

            Console.WriteLine(str);
            Console.WriteLine(ch);
            Console.WriteLine(ch + ch);
            Console.WriteLine(num);
            Console.WriteLine();
            Console.WriteLine(100 + 300);
            Console.WriteLine(3.5 * 4.0);
            
        }
    }
}