<?php
global $base_url;
drupal_add_css( drupal_get_path( "module", "summa_blocks" ) . "/templates/css/contact-form/contact-form.css" );
drupal_add_css( drupal_get_path( "module", "summa_blocks" ) . "/templates/css/contact-form/jQuery.scombobox.css" );
drupal_add_js( drupal_get_path( "module", "summa_blocks" ) . "/templates/js/contact-form/jQuery.scombobox.js" );
drupal_add_js( drupal_get_path( "module", "summa_blocks" ) . "/templates/js/contact-form/form.js" );
drupal_add_js( drupal_get_path( "theme", "summa_revamp" ) . "/js/jquery.form-validator.min.js" );
?>
<div id="contact-form-container" class="safe-container">
    <span class="subtitle">
        <?php echo t( "that´s all folks..." ); ?>
    </span>
    <a class="anchor-prev anchor-prev-gray" href="#top"></a>
    <span class="subtitle">
        <?php echo t( "do you want get in touch with us?" ); ?>
    </span>

    <div class="msg msg-ok">
        <?php echo t( 'Your message was sent successfully. Thanks.' ); ?>
    </div>
    <div class="msg msg-error">
        <?php echo t( 'An error ocurred, please try again.' ); ?>
    </div>
    <form action="<?php echo $base_url . "/ajax/contact"; ?>" method="post" id="contact-form" class="clearfix">

        <div class="row clearfix">
            <div class="float-left">
                <input type="text" name="name" data-validation="required"
                       placeholder="<?php echo t( 'YOUR NAME (*)' ); ?>">
            </div>
            <div class="float-left hp_name" style="display: none;">
                <input type="text" name="hp_name"
                       placeholder="<?php echo t( 'YOUR NAME (*)' ); ?>">
            </div>
            <div class="float-right">
                <div class="combobox-container clearfix">
                    <select name="how" placeholder="<?php echo t( 'HOW DID YOU FIND US?' ); ?>">
                        <option value="form_engines"><?php echo t( 'SEARCH ENGINES' ); ?></option>
                        <option value="form_referral"><?php echo t( 'DIRECT REFERRAL' ); ?></option>
                        <option value="form_social"><?php echo t( 'SOCIAL MEDIA' ); ?></option>
                        <option value="form_magento"><?php echo t( 'MAGENTO PARTNER LISTING' ); ?></option>
                        <option value="form_other"><?php echo t( 'OTHER' ); ?></option>
                    </select>
                </div>
            </div>
        </div>

        <div class="row clearfix">
            <div class="float-left">
                <input type="text" name="email" data-validation="email"
                       placeholder="<?php echo t( 'YOUR E-MAIL ADDRESS (*)' ); ?>">
            </div>
            <div class="float-right">
                <div class="combobox-container clearfix">
                    <select name="interested" data-validation="required"
                            placeholder="<?php echo t( 'INTERESTED IN... (*)' ); ?>">
                        <option value="services_ecommerce"><?php echo t( 'E-COMMERCE' ); ?></option>
                        <option value="services_mobile"><?php echo t( 'MOBILE' ); ?></option>
                        <option value="services_ui"><?php echo t( 'INTERACTION DESIGN' ); ?></option>
                        <option value="services_consulting"><?php echo t( 'CONSULTING' ); ?></option>
                        <option value="services_general"><?php echo t( 'GENERAL INQUIRY' ); ?></option>
                    </select>
                </div>
            </div>
        </div>

        <div class="row clearfix">
            <div class="float-left">
                <input type="text" name="company" placeholder="<?php echo t( 'COMPANY' ); ?>">
                <input type="hidden" name="hp_company" placeholder="<?php echo t( 'COMPANY' ); ?>" class="hp_company" >
                <input type="text" name="skype" placeholder="<?php echo t( 'SKYPE' ); ?>">
            </div>
            <div class="float-right">
                <textarea name="message" data-validation="required"
                          placeholder="<?php echo t( 'MESSAGE (*)' ); ?>"></textarea>
                <input type="reset" value="<?php echo t( 'CANCEL' ); ?>">
                <input type="submit" value="<?php echo t( 'SUBMIT' ); ?>">
            </div>
        </div>

    </form>
</div>