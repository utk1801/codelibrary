-	<?php
	
		$cname=$_POST['cname'];
		$email=$_POST['email'];
		$feed=$_POST['feed']; 
		//$DOCUMENT_ROOT=$_SERVER['DOCUMENT_ROOT'];
		$mailcontent = "Customer Name: ".$cname."\n".
					   "University Name: ".$uname."\n".
					   "Customer email: ".$email."\n".
					   "Customer Comments: \n".$feed."\n";	
		$subject="Feedback for WebSite.";
		$toaddress="feedback@codelibrary.in";	
		$fromaddress="From: webserver@codelibrary.in";
	
		mail($toaddress,$subject,$mailcontent,$fromaddress);
		?>
<html>
	<head>
		<title>CodeLibrary-Feedback Submitted</title>
	</head>
		<body>
		<div id="wrap" style="width:325px; margin: 0 auto; font:16px Tahoma">
		<h1>Feedback Submitted</h1>
		<p>Your Feedback has been sent.</p>
		</div>
		</body>
</html>