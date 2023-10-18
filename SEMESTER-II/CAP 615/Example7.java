import javax.swing.*;  
public class Example7 extends JFrame
{  
public Example7() 
{  
JSlider slider = new JSlider(JSlider.HORIZONTAL, 0, 50, 25);  
slider.setMinorTickSpacing(2);  
slider.setMajorTickSpacing(10);  
slider.setPaintTicks(true);  
slider.setPaintLabels(true);  
  
JPanel panel=new JPanel();  
panel.add(slider);  
add(panel);  
}  

public static void main(String s[]) 
{  
Example7 frame=new Example7();  
frame.pack();  
frame.setVisible(true);  
}  

}  