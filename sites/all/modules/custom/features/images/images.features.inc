<?php

/**
 * Implementation of hook_image_default_styles().
 */
function images_image_default_styles() {
  $styles = array();

  // Exported image style: blog_author_sidebar
  $styles['blog_author_sidebar'] = array(
    'name' => 'blog_author_sidebar',
    'effects' => array(
      '7' => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '67',
          'height' => '64',
        ),
        'weight' => '1',
      ),
      '8' => array(
        'label' => 'Desaturate',
        'help' => 'Desaturate converts an image to grayscale.',
        'effect callback' => 'image_desaturate_effect',
        'module' => 'image',
        'name' => 'image_desaturate',
        'data' => array(),
        'weight' => '2',
      ),
    ),
  );

  // Exported image style: case_study
  $styles['case_study'] = array(
    'name' => 'case_study',
    'effects' => array(
      '9' => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '618',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
      '10' => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => '618',
          'height' => '400',
          'anchor' => 'center-center',
        ),
        'weight' => '2',
      ),
    ),
  );

  // Exported image style: clients_partners
  $styles['clients_partners'] = array(
    'name' => 'clients_partners',
    'effects' => array(
      '1' => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '193',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
      '2' => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => '193',
          'height' => '99',
          'anchor' => 'center-center',
        ),
        'weight' => '2',
      ),
    ),
  );

  // Exported image style: hp_slide
  $styles['hp_slide'] = array(
    'name' => 'hp_slide',
    'effects' => array(
      '1' => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '270',
          'height' => '297',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: post_browse
  $styles['post_browse'] = array(
    'name' => 'post_browse',
    'effects' => array(
      '3' => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '617',
          'height' => '230',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: preview_team
  $styles['preview_team'] = array(
    'name' => 'preview_team',
    'effects' => array(
      '1' => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '142',
          'height' => '136',
        ),
        'weight' => '1',
      ),
      '2' => array(
        'label' => 'Desaturate',
        'help' => 'Desaturate converts an image to grayscale.',
        'effect callback' => 'image_desaturate_effect',
        'module' => 'image',
        'name' => 'image_desaturate',
        'data' => array(),
        'weight' => '2',
      ),
    ),
  );

  // Exported image style: preview_team_small
  $styles['preview_team_small'] = array(
    'name' => 'preview_team_small',
    'effects' => array(
      '3' => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '67',
          'height' => '64',
        ),
        'weight' => '1',
      ),
      '4' => array(
        'label' => 'Desaturate',
        'help' => 'Desaturate converts an image to grayscale.',
        'effect callback' => 'image_desaturate_effect',
        'module' => 'image',
        'name' => 'image_desaturate',
        'data' => array(),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}
