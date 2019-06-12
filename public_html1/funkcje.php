<?php

$dane = array('imie' => 'Adam', 'nazwisko' => 'Kowalski');
$dane['wiek'] = 25;

function zrob_link($adres, $tresc, $echo = 1) {
	$link = '<a href="'.$adres.'">'.$tresc.'</a>';
	if ($echo)
		echo $link;
	else
		return $link;
}

$DZIS = 'Szczęśliwego dnia!'

?>