//テキスト40p

//using System;

//class type05
//{
//    public static void Main()
//    {
//        Console.Write("身長(m)");
//        double bl = double.Parse(Console.ReadLine());
//        Console.Write("体重(kg)");
//        double bw = double.Parse(Console.ReadLine());
//        Console.WriteLine("BMI = {0:##.#}", bw / Math.Pow(bl, 2.0));
//    }

//}

//テキスト41P

//using System;

//class type06
//{
//    public static void Main()
//    {
//        Console.WriteLine("decimal{0}~{1}", decimal.MinValue, decimal.MaxValue);
//    }
//}

//テキスト42P

//using System;

//class type07
//{
//    public static void Main()
//    {
//        decimal total;

//        Console.Write("借入金額");
//        decimal a = decimal.Parse(Console.ReadLine());
//        Console.Write("利息（％）");
//        decimal b = decimal.Parse(Console.ReadLine());

//        decimal r = b / 100M;

//        total = a * (1m + r);

//        Console.WriteLine("1期間後の元利合計は{0:c}です", total);
//        a = total;
//        total = a * (1m + r);
//        Console.WriteLine("2期間後の元利合計は{0:c}です", total);
//        a = total;
//        total = a * (1m + r);
//        Console.WriteLine("3期間後の元利合計は{0:c}です", total);
//        a = total;
//        total = a * (1m + r);
//        Console.WriteLine("4期間後の元利合計は{0:c}です", total);
//    }
//}

//テキスト44P
//using System;

//class type08
//{
//    public static void Main()
//    {
//        char a = 'a', b = 'b', c = 'c';

//        Console.WriteLine(a);
//        Console.WriteLine(b);
//        Console.WriteLine(c);
//    }
//}

//テキスト46P
using System;

class escape01
{
    public static void Main()
    {
        char n = '\n';
        string str1 = "今日は";
        string str2 = "いい天気ですね";

        Console.WriteLine(str1 + n + str2);

        string str3 = "今日は\nいい天気ですね";
        Console.WriteLine(str3);
    }
}