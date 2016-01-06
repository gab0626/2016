  //論理型　テキスト47P

//using System;

//class bool01
//{
//    public static void Main()
//    {
//        bool a = true;
//        bool b = false;

//        Console.WriteLine("a = {0}, b = {1}", a, b);
//        Console.WriteLine("aは{0}", a.GetType());
//        Console.WriteLine("aを文字列にすると{0}", a.ToString());
//        Console.WriteLine("bを文字列にすると{0}", b.ToString());
//    }
//}

//リテラル　テキスト50P

//using System;

//class literal01
//{
//    public static void Main()
//    {
//        string format = "{0}の型は.NET型で{1}です";

//        Console.WriteLine(format, "100", 100.GetType());
//        Console.WriteLine(format, "100U", 100U.GetType());
//        Console.WriteLine(format, "100L", 100L.GetType());
//        Console.WriteLine(format, "100UL", 100UL.GetType());
//        Console.WriteLine(format, "1.25", 1.25.GetType());
//        Console.WriteLine(format, "1.25F", 1.25F.GetType());
//        Console.WriteLine(format, "1.25M", 1.25M.GetType());
//        Console.WriteLine();

//        Console.WriteLine(format, "10F", 10F.GetType());
//        Console.WriteLine(format, "10D", 10D.GetType());
//        Console.WriteLine(format, "10M", 10M.GetType());
//        Console.WriteLine();

//        Console.WriteLine(format, "-10D", (-10D).GetType());
//    }
//}

//暗黙の型指定　テキスト52P

//using System;

//class var01
//{
//    public static int Main()
//    {
//        var mytext = "猫でもわかるC#プログラミング";
//        var no = 2;
//        var myc = "版";

//        Console.WriteLine(mytext + no + myc);
//        Console.WriteLine("mytextの型は{0}で、noの型は{1}、mycは{2}",
//                           mytext.GetType(), no.GetType(), myc.GetType());

//        return 0;
//    }
//}

//dynamic型　テキスト53P

//using System;

//class dynamic01
//{
//    public static int Main()
//    {
//        dynamic x = 10, y = "abc", z;
//        z = 1.25;

//        Console.WriteLine("x{0}", x.GetType());
//        Console.WriteLine("y{0}", y.GetType());
//        Console.WriteLine("z{0}", z.GetType());

//        return 0;
//    }
//}

//スコープ　テキスト54P

//using System;

//class scope01
//{
//    public static int Main()
//    {
//        int a = 10;
//        Console.WriteLine("a = {0}", a);
//        {
//            int b = 5;
//            Console.WriteLine("a = {0},b = {1}", a, b);
//            {
//                int c = 1;
//                Console.WriteLine("a = {0},b = {1}, c = {2}", a, b, c);
//            }
            
//        }

//        return 0;
//    }
//}


//型変換　　テキスト56P

using System;

class cast01
{
    public static int Main()
    {
        long a = 2;
        byte b;

        Console.WriteLine("{0}", a);
        b = (byte)a;

        Console.WriteLine("{0},{1}", a, b);

        return 0;
    }
}