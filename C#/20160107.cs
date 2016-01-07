//列挙型　enum テキスト58P

//using System;

//class enum01
//{
//    enum MyMonth
//    {
//        Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
//    };

//    public static void Main()
//    {
//        Console.WriteLine("Aprは{0}月", (int)MyMonth.Apr);
//        Console.WriteLine("Junは{0}月", (int)MyMonth.Jun);
//    }
//}

//オブジェクト型とボックス化　テキスト59P

//using System;

//class object01
//{
//    public static void Main()
//    {
//        object o;
//        byte b = 50;
//        int i = 10;
//        long l = 55555;
//        double d = 0.00254;

//        o = b;
//        Console.WriteLine(o);

//        o = i;
//        Console.WriteLine(o);

//        o = l;
//        Console.WriteLine(o);

//        o = d;
//        Console.WriteLine(o);
//    }
//}

//using System;

//class object02
//{
//    public static void Main()
//    {
//        object o;
//        int i, a = 100;

//        o = a;
//        i = (int)o;
//        Console.WriteLine("i = {0}",o);
//    }
//}

//文字列型　string テキスト63P

//using System;

//class string01
//{
//    public static void Main()
//    {
//        string str = "今日はいい天気ですね";
//        string mystr;
//        char c;

//        Console.WriteLine("strの長さは{0}",str.Length);

//        c = str[4];

//        Console.WriteLine("strの5番目の文字は{0}",c);

//        mystr = String.Copy(str);

//        Console.WriteLine("mystr = {0}",mystr);

//        int n = str.IndexOf('は');

//        Console.WriteLine("文字列に'は'が出てくるのは{0}番目です",n + 1);
//    }
//}

//is演算子　as演算子　テキスト65P

//using System;

//class isas01
//{
//    public static void Main()
//    {
//        object o;
//        long l = 1;
//        o = l;

//        Console.WriteLine("oにlをボックス化しました");
//        Console.WriteLine("o is long----{0}", o is long);
//        Console.WriteLine("o is int ----{0}", o is int);

//        Console.WriteLine();
//        Console.WriteLine("今度はoを文字列にしてみました");
//        o = "abc";

//        Console.WriteLine("o is str ----{0}", o is string);
//    }
//}

//using System;

//class isas02
//{
//    public static void Main()
//    {
//        long l = 100;
//        object o;
//        string s;

//        o = l;
//        s = o as string;
//        Console.WriteLine(o);
//    }
//}

//using System;

//class test02
//{
//    public static void Main()
//    {
//        var sec = 365 * 24 * 60 * 60;
//        Console.Write(sec);
//    }
//}

//using System;

//class test03
//{
//    public static void Main()
//    {
//        Console.WriteLine("円の半径を入力してください---");
//        double r = double.Parse(Console.ReadLine());

//        double s = Math.Pow(r, 2.0) * Math.PI;
//        Console.WriteLine("{0}の半径をもつ円の面積は{1}", r, s);
//    }
//}

