using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _008_structure
{
    struct Position
    {
        public float x;
        public float y;
        public float z;
    }
    enum Direction
    {
        West,
        East,
        North,
        South
    }
    struct Path
    {
        public float Distance;
        public Direction dic;
    }
    class Program
    {
        static void Main(string[] args)
        {
            Position enemy1Position;
            enemy1Position.x = 33;
            Path path1;
            path1.Distance = 1000;
            path1.dic = Direction.East;
        }
    }
}
