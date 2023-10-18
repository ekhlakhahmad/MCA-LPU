<?php  
 header('Content-Type: text/event-stream');  
 header('Cache-Control: no-cache');  
/Get the current time of server  
  $time = date('r');  
 echo "data: The Current Server time is: {$time}\n\n";  
 flush();  
 ?>  