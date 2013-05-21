<?php
$user = user_load($row->uid);

/* print twitter
if (isset($user->field_profile_twitter['und'][0]['value'])) {
  print '<a href="'.$user->field_profile_twitter['und'][0]['value'].'" target="_blank"><img src="/sites/all/themes/summa/images/ico_tw.png" alt="" /></a>';
}*/

/* print linkedin
if (isset($user->field_profile_linkedin['und'][0]['value'])) {
  print '<a href="'.$user->field_profile_linkedin['und'][0]['value'].'" target="_blank"><img src="/sites/all/themes/summa/images/ico_in.png" alt="" /></a>';
}*/

/* print skype
if (isset($user->field_profile_skype['und'][0]['value'])) {
  print '<a href="skype:'.$user->field_profile_skype['und'][0]['value'].'?call"><img src="/sites/all/themes/summa/images/ico_sk.png" alt="" /></a>';
}*/

// print blog
if (isset($user->field_profile_blog['und'][0]['value'])) {
  print '<a href="'.$user->field_profile_blog['und'][0]['value'].'" target="_blank"><img src="/sites/all/themes/summa/images/ico_blogs.png" alt="" /></a>';
}

/* print certification
if (isset($user->field_profile_certification_plus['und'][0]['value'])) {
  print '<img src="/sites/all/themes/summa/images/magento_logo_cert_plus.png.png" alt="" />';
}*/

?>
