<?php
/**
 * Description of TargetFactory
 *
 * @author tomas
 */
interface TargetFactory {
  static public function Create($name, $api_key, $user, $password);
}
?>
