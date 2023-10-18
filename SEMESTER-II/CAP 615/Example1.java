import javax.swing.*;    
class Example1
{    
JFrame f;    
Example1()
{    
    f=new JFrame("ComboBox Example");    
    String state[]={"Punjab","Himachal","Haryana","J&K","UP"};        
    JComboBox cb=new JComboBox(state);    
    cb.setBounds(50, 50,90,20);    
    f.add(cb);        
    f.setLayout(null);    
    f.setSize(400,500);    
    f.setVisible(true);         
}    
public static void main(String[] args) 
{    
    new Example1();         
}    
} 