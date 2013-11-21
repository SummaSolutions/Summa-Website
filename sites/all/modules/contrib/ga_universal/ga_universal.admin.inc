<?php

function ga_universal_config() {
  $form = array();

  $form['ga_universal_ua'] = array(
    '#type' => 'textfield',
    '#title' => t('Google Analytics UA'),
    '#default_value' => variable_get('ga_universal_ua', 'UA-'),
    '#required' => TRUE,
  );
  $form['ga_universal_domain'] = array(
    '#type' => 'textfield',
    '#title' => t('Site Domain'),
    '#default_value' => variable_get('ga_universal_domain', ''),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}
