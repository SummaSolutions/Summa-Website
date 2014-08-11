<?php
global $base_url;
drupal_add_css( drupal_get_path( "module", "summa_blocks" ) . "/templates/css/contact-form/contact-form.css" );
drupal_add_js( drupal_get_path( "module", "summa_blocks" ) . "/templates/js/contact-form/skin.js" );
drupal_add_js( drupal_get_path( "module", "summa_blocks" ) . "/templates/js/contact-form/form.js" );
drupal_add_js( drupal_get_path( "theme", "summa_revamp" ) . "/js/jquery.form-validator.min.js" );
?>
<div id="contact-form-container" class="safe-container">
    <span class="subtitle">
        <?php echo t( "that´s all folk..." ); ?>
    </span>
    <a class="anchor-prev anchor-prev-gray"></a>
    <span class="subtitle">
        <?php echo t( "do you want get in touch with us?" ); ?>
    </span>

    <div class="msg msg-ok">
        <?php echo t( 'Message sent.' ); ?>
    </div>
    <div class="msg msg-error">
        <?php echo t( 'An error ocurred, please try again.' ); ?>
    </div>
    <form action="<?php echo $base_url . "/ajax/contact"; ?>" method="post" id="contact-form" class="clearfix">
        <div class="float-left">
            <input type="text" name="name" data-validation="required" placeholder="<?php echo t( 'YOUR NAME (*)' ); ?>">
        </div>
        <div class="float-right">
            <input type="text" name="how" placeholder="<?php echo t( 'HOW DID YOU FIND US?' ); ?>">
        </div>
        <div class="float-left">
            <input type="text" name="email" data-validation="email"
                   placeholder="<?php echo t( 'YOUR E-MAIL ADDRESS (*)' ); ?>">
        </div>
        <div class="float-right">
            <input type="text" name="interested" data-validation="required"
                   placeholder="<?php echo t( 'INTERESTED IN... (*)' ); ?>">
        </div>
        <div class="float-left">
            <input type="text" name="company" placeholder="<?php echo t( 'COMPANY' ); ?>">
            <input type="text" name="skype" placeholder="<?php echo t( 'SKYPE' ); ?>">
        </div>
        <div class="float-right">
            <textarea name="message" data-validation="required"
                      placeholder="<?php echo t( 'MESSAGE (*)' ); ?>"></textarea>
            <input type="reset" value="<?php echo t( 'CANCEL' ); ?>">
            <input type="submit" value="<?php echo t( 'SUBMIT' ); ?>">
        </div>
    </form>
</div>