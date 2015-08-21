<?php
/**
 * DONT MODIFY CONSTANtS OR BACKEND INFO
 */
function summa_blocks_ajax_contact()
{
    global $user;

    $name       = ( isset( $_POST["hp_name"] )      ? $_POST["hp_name"] : "" );
    $how        = ( isset( $_POST["hp_how"] )       ? $_POST["hp_how"] : "" );
    $email      = ( isset( $_POST["hp_email"] )     ? $_POST["hp_email"] : "" );
    $interested = ( isset( $_POST["hp_interested"] ) ? $_POST["hp_interested"] : "" );
    $company    = ( isset( $_POST["hp_company"] )   ? $_POST["hp_company"] : "" );
    $skype      = ( isset( $_POST["hp_skype"] )     ? $_POST["hp_skype"] : "" );
    $message    = ( isset( $_POST["hp_message"] )   ? $_POST["hp_message"] : "" );
    $hpLastname   = ( isset( $_POST["hp_lastname"] ) ? $_POST["hp_lastname"] : "" );
    $hpDepartment = ( isset( $_POST["hp_department"] ) ? $_POST["hp_department"] : false );

    $_POST['name']      = $name;
    $_POST['how']       = $how;
    $_POST['email']     = $email;
    $_POST['company']   = $company;
    $_POST['skype']     = $skype;
    $_POST['interested'] = $interested;
    $_POST['message']   = $message;

    $nid = 125;

    $node = node_load( $nid );

    $data = array(

        1 => array( $name  ),
        3 => array( $company  ),
        4 => array( $message  ),
        5 => array( $email  ),
        6 => array( $interested  ),
        7 => array( $skype  ),
        8 => array( $how  ),


    );
    $submission = (object)array(
        'nid' => $nid,
        'uid' => $user->uid,
        'submitted' => REQUEST_TIME,
        'remote_addr' => ip_address(),
        'is_draft' => FALSE,
        'data' => $data,
    );

    // honeypot implementation in hardcoded form
    if (empty($hpLastname) && $hpDepartment === false && !empty($name) && !empty($email)) {
        module_load_include( 'inc', 'webform', 'includes/webform.submissions' );

        webform_submission_insert( $node, $submission );

        webform_submission_send_mail( $node, $submission );
    }
    return;
}
