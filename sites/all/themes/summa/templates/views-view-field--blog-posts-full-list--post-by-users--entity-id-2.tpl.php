<?php
$preformat = preg_replace('/>([a-zA-Z0-9\ -]{2,})<\/div>/i','><a href="/blogposts/$1">$1</a></div>', $output);
print $preformat;
