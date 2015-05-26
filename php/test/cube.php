<?php

/*//一番簡単な書き方
function cube($num){
	return pow($num,3);
}
*/

function mypow($val){
	return function($aiu) use(&$val){
		echo pow($val,$aiu),PHP_EOL;
	};
}

$a = mypow(3);
$a(3);


//$cube = mypow(3);
//echo cube(4), PHP_EOL;

?>
