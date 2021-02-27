using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data.Entity;

namespace BASEnet
{
    class ApplicationContext:DbContext
    {
        public DbSet<User> Users { get; set; } //list , model User , table Users

        public ApplicationContext() : base("DefaultConnection") { } //settings of base data has name "DefaultConnection"
    }
}
