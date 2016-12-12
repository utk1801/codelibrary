<html>
<head>
	<title>ShopCart! Home Page!</title>
</head>
<body>	
	<h1>ShopCart Portal:</h1>
	<h2>Order Results</h2>
	<?php
		echo "<p>Order Processed at ".date('H:i jS F Y');
		echo "<p>Your details are as follows:\n</p>";
		$tqty=$_POST['tqty'];
		$mqty=$_POST['mqty'];
		$lqty=$_POST['lqty']; 
		$date=date('H:i jS F Y');
		$address=$_POST['address'];
		$DOCUMENT_ROOT=$_SERVER['DOCUMENT_ROOT'];
		$totalqty=0;
		$totalqty=$tqty + $mqty + $lqty ;
		echo "Items Ordered:".$totalqty."<br/>";
		
		if($totalqty==0){
			echo "You didn't order anything on the previous page.<br/>";
			}
			else{
		echo $tqty." tablets<br/>".$mqty." mobiles<br/>".$lqty." laptops<br/>"; }
	$ttlamnt=0.00;
	define('MPRICE',10000);
	define('TPRICE',15000);
	define('LPRICE',40000);
 	$ttlamnt=$tqty * TPRICE +  $mqty * MPRICE + $lqty * LPRICE;
	printf("Total of order is %.2f",$ttlamnt);
	echo "<p>Address to ship to is ".$address."</p>";
	$outstr=$date."\t".$tqty." tablets \t".$mqty." mobiles \t".$lqty." laptops \t".$ttlamnt."\t".$address."\n";
	echo "<br/>";

	@$fp=fopen("order.txt",'ab');
	flock($fp,LOCK_EX);
	if(!$fp)
	{
	echo "<p><strong>Your order couldn't be proceesed at this time. Please,Try again later.</strong></p>";
	exit;
		}
	
fwrite($fp,$outstr);
flock($fp,LOCK_UN);
fclose($fp);

echo "<p>Order Written.</p>";	
	?>
</body>
</html>	