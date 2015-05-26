<?php

function test(){
	echo "this is test function", PHP_EOL;
}

$f = function(){
	echo "this is mumei function\n";
};

$ar = array('"ダブルクオート"', '<tag>','\'シングルクオート\'');
var_dump($ar);
$escape = array_map(function($val){
	return htmlspecialchars($val,ENT_QUOTES,'UTF-8');
},$ar
);
var_dump($ar);

?>
