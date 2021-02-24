using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace ClientBase
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void TextBox_TextChanged(object sender, TextChangedEventArgs e)
        {

        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            //get data of user 
            string password = passBox.Text;
            string login = loginBox.Text;

            //explore for bags
            if(password.Length < 6)
            {
                passBox.ToolTip = "Uncorrect!";
                passBox.Background = Brushes.DarkRed;
            }
            if (login.Length < 6)
            {
                loginBox.ToolTip = "Uncorrect!";
                loginBox.Background = Brushes.DarkRed;
            }
        }
    }
}
