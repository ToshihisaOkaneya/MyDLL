using System;
using System.Diagnostics;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace MyDllWrapper.Test
{
    [TestClass]
    public class TestMyDLLCliWrapper
    {
        static string Dir { get; set; }
        static string Ip { get; set; }

        [ClassInitialize]
        public static void ClassInitialize(TestContext context)
        {
            Dir = context.Properties["OutputDir"].ToString();
            Trace.WriteLine(Dir);
            Ip = context.Properties["IpAddress"].ToString();
            Trace.WriteLine(Ip);
        }

        [TestMethod]
        public void TestChangeBool()
        {
            Assert.AreEqual(false, MyDLLCliWrapper.ChangeBool(true));
            Assert.AreEqual(true, MyDLLCliWrapper.ChangeBool(false));
        }

        [TestMethod]
        public void TestPlus2()
        {
            Assert.AreEqual(3, MyDLLCliWrapper.Plus2(1));
        }

        [TestMethod]
        public void TestPlusKakko()
        {
            Assert.AreEqual("「test」", MyDLLCliWrapper.PlusKakko("test"));
        }

        [TestMethod]
        public void TestFileRead()
        {
            Assert.AreEqual("hoge", MyDLLCliWrapper.ReadFile());
        }
    }
}
