
//演算子　テキスト70P

//using System;

//class expression01
//{
//    public static void Main()
//    {
//        int a = 0;
//        Console.WriteLine("a = {0}", a);
//        Console.WriteLine("(a = 7)の値は{0}です", a = 7);
//    }
//}

//算術演算子　テキスト71P

//using System;

//class add01
//{
//    public static void Main()
//    {
//        Console.WriteLine(3 + 6);
//        Console.WriteLine(3.0 + 6);
//        Console.WriteLine("3.5" + 6);
//        Console.WriteLine(3.5 + "6");
//        Console.WriteLine();

//        Console.WriteLine("(3.0 + 6)の型は{0}", ("3.0" + 6).GetType());
//        Console.WriteLine("文字列3.5 + intの6の型は{0}", ("3.5 + 6").GetType());
//        Console.WriteLine("double型の3.5 + 文字列6の型は{0}", (3.5 + 6).GetType());
//    }
//}

//テキスト73P

//using System;

//class division01
//{
//    public static void Main()
//    {
//        Console.WriteLine("10 / 3 = {0}", 10 / 3);
//        Console.WriteLine("(10 / 3)の型は{0}", (10 / 3).GetType());
//        Console.WriteLine("10 / 3.0 = {0}", 10 / 3.0);
//        Console.WriteLine("(10 / 3.0)の型は{0}", (10 / 3.0).GetType());
//    }
//}

//剰余演算子　テキスト74P

//using System;

//class mod01
//{
//    public static void Main()
//    {
//        Console.WriteLine("10 % 3 = {0}", 10 % 3);
//        Console.WriteLine("13.53 % 2 = {0}", 13.53 % 2);
//        Console.WriteLine("13.53 % 2.5 = {0}", 13.53 % 2.5);
//    }
//}

//インクリメント、デクリメント演算子　テキスト76P

//using System;

//class increment01
//{
//    public static void Main()
//    {
//        var a = 10;
//        Console.WriteLine(a++);
//        Console.WriteLine(a);

//        var b = 10;
//        Console.WriteLine(++b);
//        Console.WriteLine(b);
//    }
//}

//テキスト　77P

using System;

class increment02
{
    public static void Main()
    {
        var a = 1.25;
        var b = -12.3M;

        Console.WriteLine(++a);
        Console.WriteLine(--b);
    }
}