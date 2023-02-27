using System;

namespace arithmetic
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = 91*3-7;
            Console.WriteLine("Решите пример: 91*3-7");
            int s = Int32.Parse(Console.ReadLine());
            Console.WriteLine($"Ваш ответ: {s}, правильный ответ: {a}");
            Console.ReadKey();
        }
    }
}
