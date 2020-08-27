using System.EnterpriseServices;
using System.Runtime.InteropServices;

namespace COMAdder
{
    [Guid("66DE3677-9B14-41F7-A029-4F8794B67D0D")]
    public class Adder : ServicedComponent, IAdder
    {
        public int Add(int a, int b)
        {
            return a + b;
        }
    }
}
