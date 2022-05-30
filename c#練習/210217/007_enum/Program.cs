using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _007_enum
{
    enum GameState:byte//enum original is INT, change it to byte
    {
        Pause,//0
        Faild,//1
        Success,//2
        Start//3
    }
    class Program
    {
        static void Main(string[] args)
        {
            GameState state = GameState.Start;
            int num = (int)state;
            Console.WriteLine(state +" = "+ num);
            Console.ReadKey();
        }
    }
}
