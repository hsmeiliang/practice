using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _012_structureFunc
{
    struct Name
    {
        public string first;
        public string last;

        public string Getname()
        {
            return first + " " + last;
        }
    }
    struct Vector3
    {
        public float x;
        public float y;
        public float z;
        public double Distance()
        {
            return Math.Sqrt(x * x + y * y + z * z);
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Name myname;
            myname.first = "first";
            myname.last = "last";
            Console.WriteLine("His name is " + myname.Getname());
            Vector3 MyVector;
            MyVector.x = 1;
            MyVector.y = 0;
            MyVector.z = 1;
            Console.WriteLine(MyVector.Distance());
            Console.ReadKey();
        }
    }
}
