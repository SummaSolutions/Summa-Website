<?php
/**
 * DONT MODIFY CONSTANtS OR BACKEND INFO
 */
function summa_blocks_ajax_contact()
{
    global $user;

    $name   = ( isset( $_POST["name"] ) ? $_POST["name"] : "" );
    $how    = ( isset( $_POST["how"] ) ? $_POST["how"] : "" );
    $email  = ( isset( $_POST["email"] ) ? $_POST["email"] : "" );
    $interested = ( isset( $_POST["interested"] ) ? $_POST["interested"] : "" );
    $company = ( isset( $_POST["company"] ) ? $_POST["company"] : "" );
    $skype  = ( isset( $_POST["skype"] ) ? $_POST["skype"] : "" );
    $message = ( isset( $_POST["message"] ) ? $_POST["message"] : "" );
    $hpname   = ( isset( $_POST["hp_lastname"] ) ? $_POST["hp_lastname"] : "" );
    $hpcompany = ( isset( $_POST["hp_company"] ) ? $_POST["hp_company"] : "" );

    $nid = 125;

    $node = node_load( $nid );

    $data = array(

        1 => array( "value" => array( $name ) ),
        //2 => array( "value" => array( $hpname ) ),
        3 => array( "value" => array( $company ) ),
        //4 => array( "value" => array( $hpcompany ) ),
        5 => array( "value" => array( $message ) ),
        6 => array( "value" => array( $email ) ),
        7 => array( "value" => array( $interested ) ),
        8 => array( "value" => array( $skype ) ),
        9 => array( "value" => array( $how ) ),


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
    if (empty($hpname) && empty($hpcompany)) {
        module_load_include( 'inc', 'webform', 'includes/webform.submissions' );

        webform_submission_insert( $node, $submission );

        webform_submission_send_mail( $node, $submission );
    }
    return;
}