using System;

namespace ConsoleApp3
{
    class Program
    {
        static void Main(string[] args)
        {
            string In()
            {
                return Console.ReadLine();
            }
            void Out(string stroka)
            {
                Console.WriteLine(stroka);
            }
            string Method(string stroka)
            {
                string outputstroka;
                outputstroka = null;
                for (int i = stroka.Length - 1; i >= 0; i--)
                {
                    outputstroka += stroka[i];
                }
                return outputstroka ;
            }
            string stroka = In();

            stroka = Method(stroka);

            Out(stroka);    
        }
        
    }
}
