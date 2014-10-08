<?php
    global $base_url;
    drupal_add_css( drupal_get_path( "module", "feria_empleo" ) . "/form/feria_empleo.css" );
    drupal_add_css( drupal_get_path( "module", "feria_empleo" ) . "/form/jQuery.scombobox.css" );
    drupal_add_js( drupal_get_path( "module", "feria_empleo" ) . "/form/jQuery.scombobox.js" );
    drupal_add_js( drupal_get_path( "module", "feria_empleo" ) . "/form/form.js" );
    drupal_add_js( drupal_get_path( "theme", "summa_revamp" ) . "/js/jquery.form-validator.min.js" );
?>
<div id="form-container" class="safe-container">
    <h1>
        Formulario de contacto
    </h1>
    <div class="msg msg-ok">
        Su mensaje ha sido enviado, gracias!
    </div>
    <div class="msg msg-error">
        Ocurrió un error, intente nuevamente.
    </div>
    <form action="<?php echo $base_url . "/ajax/feria-empleo"; ?>" method="post" id="contact-form" class="clearfix">
        <div class="row clearfix">
            <div class="float-left">
                <input type="text" autocomplete="off" name="name" data-validation="required" placeholder="NOMBRE (*)">
            </div>
            <div class="float-right">
                <input type="text" autocomplete="off" name="lastname" data-validation="required" placeholder="APELLIDO (*)">
            </div>
        </div>
        <div class="row clearfix">
            <input type="text" autocomplete="off" name="email" data-validation="email required" placeholder="E-MAIL (*)">
        </div>
        <div class="row clearfix">
            <div class="float-left">
                <label>Conocimientos</label>
                <ul>
                    <li><input type="checkbox" autocomplete="off" name="conocimientos[]" value="php">PHP</li>
                    <li><input type="checkbox" autocomplete="off" name="conocimientos[]" value="java">JAVA</li>
                    <li><input type="checkbox" autocomplete="off" name="conocimientos[]" value="html5">HTML5</li>
                    <li><input type="checkbox" autocomplete="off" name="conocimientos[]" value="css3">CSS3</li>
                    <li><input type="checkbox" autocomplete="off" name="conocimientos[]" value="javascript">JAVASCRIPT</li>
                    <li><input type="checkbox" autocomplete="off" name="conocimientos[]" value="mysql">MYSQL</li>
                    <li><input type="checkbox" autocomplete="off" name="conocimientos[]" value="sass">SASS/LESS</li>
                    <li><input type="checkbox" autocomplete="off" name="conocimientos[]" value="magento">Magento</li>
                    <li><input type="checkbox" autocomplete="off" name="conocimientos[]" value="hybris">Hybris</li>
                    <li><input type="checkbox" autocomplete="off" name="conocimientos[]" value="oop">Programacion Orientada Objetos</li>
                </ul>
            </div>
            <div class="float-right">
                <input type="text" autocomplete="off" name="carrera" placeholder="CARRERA">
                <input type="text" autocomplete="off" name="ano_cursada" placeholder="AÑO DE CURSADA">
                <div class="combobox-container clearfix">
                    <select data-validation="required" autocomplete="off" name="experiencia" placeholder="EXPERIENCIA LABORAL EN EL AREA DE SISTEMAS (*)">
                        <option value="si">SI</option>
                        <option value="no">NO</option>
                    </select>
                </div>
            </div>
        </div>
        <div class="row clearfix">
                <input type="reset" value="CANCELAR">
                <input type="submit" value="ENVIAR">
        </div>
    </form>
</div>