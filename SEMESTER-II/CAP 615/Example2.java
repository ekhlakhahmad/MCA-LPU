import javax.swing.*;    
import java.awt.event.*;    
class Example2
{    
JFrame f;    
Example2()
{    
    f=new JFrame("ComboBox Example");   
    JLabel label = new JLabel();          
    label.setHorizontalAlignment(JLabel.CENTER);  
    label.setSize(400,100);  
    JButton b=new JButton("Click Me");  
    b.setBounds(200,100,75,20);  
    String state[]={"Punjab","Himachal","Haryana","J&K","UP"};        
    JComboBox cb=new JComboBox(state);    
    cb.setBounds(50, 100,90,20);    
    f.add(cb); f.add(label); f.add(b);    
    f.setLayout(null);    
    f.setSize(350,350);    
    f.setVisible(true);       
    b.addActionListener(new ActionListener() {  
        public void actionPerformed(ActionEvent e) {       
          String data = "Selected State Name is: "+cb.getItemAt(cb.getSelectedIndex());  
          label.setText(data);  
    }});           
}    
public static void main(String[] args) 
{    
    new Example2();         
}    
}  