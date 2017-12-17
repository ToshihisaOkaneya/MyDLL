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
        static void Main(string[] args)
        {
            Console.WriteLine(MyDLLCliWrapper.Plus2(2));
            Console.WriteLine(MyDLLCliWrapper.ChangeBool(true));
            Console.WriteLine(MyDLLCliWrapper.PlusQuotation("test"));
            Console.WriteLine(MyDLLCliWrapper.GetEnum());
            
        }
    }
}
