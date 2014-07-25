<?php

function summa_blocks_views_post_execute( &$view )
{
    if ( $view->name == 'case_studies_features' ) {

        foreach ( $view->result as $key => $res ) {
            if ( isset( $prev ) && ( $prev->nid == $res->nid ) ) {
                if ( isset( $res->field_field_picture_whyus[0] ) )
                    $prev->field_field_picture_whyus[] = $res->field_field_picture_whyus[0];
                unset( $view->result[$key] );
            }
            $prev = $res;
        }

        $view->result = array_slice( $view->result, 0, 3 );

    }
}