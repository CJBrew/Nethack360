using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Nethack_console_cs
{
    internal class Program
    {
        private static void Main( string[] args )
        {
            Console.WriteLine( "This is DotNetHack test console" );

            try
            {
                NetHack.Wrapper _wrapper = new NetHack.Wrapper();

                _wrapper.MoveLoop( false );
            }
            catch ( Exception ex )
            {
                Console.WriteLine( ex.ToString() );
            }
        }
    }
}