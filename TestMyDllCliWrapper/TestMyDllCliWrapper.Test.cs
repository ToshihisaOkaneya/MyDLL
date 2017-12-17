using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace MyDllWrapper.Test
{
    [TestClass]
    public class TestMyDLLCliWrapper
    {
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
    }
}
