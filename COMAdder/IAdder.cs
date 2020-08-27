using System.Runtime.InteropServices;

namespace COMAdder
{

    [Guid("12D0155C-AF7C-4EA4-BE97-36489C4C91FD")]
    public interface IAdder
    {
        int Add(int a, int b);
    }
}
