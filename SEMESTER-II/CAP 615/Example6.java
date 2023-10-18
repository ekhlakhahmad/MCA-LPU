import javax.swing.*;
  
class Example6 extends JFrame
{  
public Example6() 
{  
JSlider slider = new JSlider(JSlider.HORIZONTAL, 0, 50, 25);  
JPanel panel=new JPanel();  
panel.add(slider);  
add(panel);  
}  
  
public static void main(String s[]) 
{  
Example6 frame=new Example6();  
frame.pack();  
frame.setVisible(true);  
}  

}