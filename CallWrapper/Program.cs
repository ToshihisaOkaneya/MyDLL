using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using MyDllWrapper;

namespace CallWrapper
{
    class Program
    {
        static NumE MyNum;
        
        static void Main(string[] args)
        {
            Console.WriteLine(MyDLLCliWrapper.Plus2(2));
            Console.WriteLine(MyDLLCliWrapper.ChangeBool(true));
            Console.WriteLine(MyDLLCliWrapper.PlusQuotation("test"));
            Console.WriteLine(MyDLLCliWrapper.GetEnum());

            MyDLLCliWrapper.SetCallback(num =>
            {
                MyNum = num;
            });
            MyDLLCliWrapper.SetTwo();
            Console.WriteLine("MyNum: {0}", MyNum);
            MyDLLCliWrapper.SetThree();
            Console.WriteLine("MyNum: {0}", MyNum);
        }
    }
}
